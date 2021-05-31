//Fully associative cache, write to memory only at rejection

module cache_line (clk, addr, write_data, memwrite, memread, age_of_accessed, data, stored_addr, age, addr_match, dirty, old);
	input 			clk;
	input [13:0]	addr;
	input [`CACHE_LINE_MAX_BIT:0]	write_data;
	input			memwrite;
	input			memread;
	input [`CACHE_LINE_NUMBER_LOG_MINUS_ONE:0]	age_of_accessed;
	output reg [`CACHE_LINE_MAX_BIT:0]	data;
	output reg [`CACHE_LINE_ADDRESS_MAX_BIT:0] stored_addr;
	output reg [`CACHE_LINE_NUMBER_LOG_MINUS_ONE:0] age;
	output			addr_match;
	output reg		dirty;
	output			old;
	
	parameter initial_age = 0;
	
	
	wire addr_match_dirty_flush;
	
	assign addr_match = (addr[13:`CACHE_LINE_SIZE_BYTES_LOG] == stored_addr) && !dirty;
	assign old = age == 0;
	assign addr_match_dirty_flush = addr_match | ((dirty | (age_of_accessed == 0)) & old);
	
	initial begin
		age = initial_age;
		
		dirty = 1;
	end
	
	always @(posedge clk) begin
		if (memread || memwrite) begin
			if (addr_match_dirty_flush) begin
				if (memwrite) begin
					data <= write_data;
					stored_addr <= addr[13:`CACHE_LINE_SIZE_BYTES_LOG];
					dirty <= 0;
				end
				age <= `CACHE_LINE_NUMBER_MINUS_ONE;
			end
			else if (age > age_of_accessed)
				age <= age - 1;
		end
	end
endmodule


module cached_data_memory (clk, addr, write_data, memwrite, memread, sign_mask, read_data, led, clk_stall, check0);
	input			clk;
	/* 
	addr is used only to assign bits to addr_buff, which in turn assigns bits to addr_buf_block_addr and addr_buf_byte_offset
	which require bits 11 to 0 only. Instruction memory substraction in FSM is unaffected by reducing address size bus.
	*/
	input[13:0]		addr;
	input [31:0]		write_data;
	input			memwrite;
	input			memread;
	input [3:0]		sign_mask;
	output reg [31:0]	read_data;
	output [7:0]		led;
	output reg		clk_stall;	//Sets the clock high
	output check0;
	

	/*
	 *	Current state
	 */
	integer			state = 0;

	/*
	 *	Possible states
	 */
	parameter		IN_CACHE = 0;
	parameter		ACCESS_MEMORY = 1;
	parameter		UPDATE_CACHE = 2;

	/*
	 *	led register
	 */
	reg [31:0]		led_reg;

	/*
	 *	Line buffer
	 */
	reg [31:0]		cache_word;

	/*
	 *	Read buffer
	 */
	wire [31:0]		read_buf;

	/*
	 *	Buffer to identify read or write operation
	 */
	reg			memread_buf;
	reg			memwrite_buf;
	wire		current_memwrite;
	
	assign current_memwrite = (state == IN_CACHE) ? memwrite : memwrite_buf;

	/*
	 *	Buffers to store write data
	 */
	reg [31:0]		write_data_buffer;
	wire [31:0]		current_write_data;
	
	assign current_write_data = (state == IN_CACHE) ? write_data : write_data_buffer;

	/*
	 *	Buffer to store address
	 */
	reg [13:0]			addr_buf;
	wire [13:0]		current_address;
	
	assign current_address = (state == IN_CACHE) ? addr : addr_buf;

	/*
	 *	Sign_mask buffer
	 */
	reg [3:0]		sign_mask_buf;
	wire [3:0]		current_sign_mask;
	
	assign current_sign_mask = (state == IN_CACHE) ? sign_mask : sign_mask_buf;

	/*
	 *	Block memory registers
	 *
	 *	(Bad practice: The constant for the size should be a `define).
	 */
	 //`define memsize = 1024;
	 // TODO: need to check the memory gets set correctly at initialization !!!!!!!!!!!!!!!!!!!!!!!!!!!
	reg [`CACHE_LINE_MAX_BIT:0]		data_block[0:256 - 1];

	/*
	 *	wire assignments
	 */
	wire [9:0]		addr_buf_block_addr;
	wire [1:0]		addr_buf_byte_offset;
	
	wire [31:0]		replacement_word;

	assign			addr_buf_block_addr	= current_address[11:2];
	assign			addr_buf_byte_offset	= current_address[1:0];
	
	/*
	 *	cache
	 */
	
	wire[`CACHE_LINE_MAX_BIT:0] cache_write_data;
	wire cache_write;
	wire cache_read;
	wire[`CACHE_LINE_NUMBER_LOG_MINUS_ONE:0]	accessed_line_age;
	wire[`CACHE_LINE_MAX_BIT:0]	cache_line_data [`CACHE_LINE_NUMBER_MINUS_ONE: 0];
	wire[`CACHE_LINE_ADDRESS_MAX_BIT:0]	cache_line_stored_addr [`CACHE_LINE_NUMBER_MINUS_ONE: 0];
	wire[`CACHE_LINE_NUMBER_LOG_MINUS_ONE:0]	cache_line_age [`CACHE_LINE_NUMBER_MINUS_ONE: 0];
	wire[`CACHE_LINE_NUMBER_MINUS_ONE: 0]	cache_line_addr_match;
	wire[`CACHE_LINE_NUMBER_MINUS_ONE: 0]	cache_line_dirty;
	wire[`CACHE_LINE_NUMBER_MINUS_ONE: 0]	cache_line_old;
	
	reg [`CACHE_LINE_MAX_BIT:0]	cache_line_from_memory;
	
	generate
		genvar i;
		for(i = 0; i < `CACHE_LINE_NUMBER; i = i + 1) begin
	
			cache_line cache_line_instance(
				.clk(clk),
				.addr(current_address),
				.write_data(cache_write_data),
				.memwrite(cache_write),
				.memread(cache_read),
				.age_of_accessed(accessed_line_age),
				.data(cache_line_data[i]),
				.stored_addr(cache_line_stored_addr[i]),
				.age(cache_line_age[i]),
				.addr_match(cache_line_addr_match[i]),
				.dirty(cache_line_dirty[i]),
				.old(cache_line_old[i])
			);
			defparam cache_line_instance.initial_age = i;
		end
	endgenerate

	/*
	 *	Read correct data from the cache
	 */
	
	wire[`CACHE_LINE_MAX_BIT:0] accessed_line_data;
	wire[`CACHE_LINE_ADDRESS_MAX_BIT:0] accessed_line_stored_addr;
	wire accessed_line_dirty;
	wire[`CACHE_LINE_SIZE_BYTES_LOG_MINUS_ONE+4:0] temp1;
	wire[`CACHE_LINE_SIZE_BYTES_LOG_MINUS_ONE+4:0] temp2;
	wire[`CACHE_LINE_SIZE_BYTES_LOG_MINUS_ONE+4:0] width;

	generate 
		genvar m;
		integer l;
		for (m = 0; m <= `CACHE_LINE_NUMBER_LOG_MINUS_ONE; m = m + 1) begin
			always @ (*) begin
				// if none is a match will set age = 0, which is the oldest one
				accessed_line_age[m] = 1'b0;
				for (l = 0; l <= `CACHE_LINE_NUMBER_MINUS_ONE; l = l + 1)
					accessed_line_age[m] = accessed_line_age[m] | (cache_line_age[l][m] & cache_line_addr_match[l]);
			end
		end
		
		for (m = 0; m <= `CACHE_LINE_ADDRESS_MAX_BIT; m = m + 1) begin
			always @ (*) begin
				accessed_line_stored_addr[m] = 1'b0;
				for (l = 0; l <= `CACHE_LINE_NUMBER_MINUS_ONE; l = l + 1)
					accessed_line_stored_addr[m] = accessed_line_stored_addr[m] | (cache_line_stored_addr[l][m] & cache_line_addr_match[l]);
			end
		end
		
		for (m = 0; m <= `CACHE_LINE_MAX_BIT; m = m + 1) begin
			always @ (*) begin
				accessed_line_data[m] = 1'b0;
				for (l = 0; l < `CACHE_LINE_NUMBER_MINUS_ONE; l = l + 1)
					accessed_line_data[m] = accessed_line_data[m] | (cache_line_data[l][m] & cache_line_addr_match[l]);
			end
		end
		always @ (*) begin
			// might be wrong, check it is accessing the correct word !!!!!!!!!!!!!!!!!!!!
			temp1 = {current_address[`CACHE_LINE_SIZE_BYTES_LOG_MINUS_ONE:2],5'b0};
			temp2 = {current_address[`CACHE_LINE_SIZE_BYTES_LOG_MINUS_ONE:2],5'b1};
			width = temp2 - temp1;
			cache_word = accessed_line_data[temp1-:width];
		end
	endgenerate
	
	assign accessed_line_dirty = (((cache_line_addr_match != 0) ? cache_line_addr_match : cache_line_old) & cache_line_dirty) != 0;
	
	assign cache_read = memread & (cache_line_addr_match != 0) & (state == IN_CACHE);
	assign cache_write = ((state == IN_CACHE) & memwrite & (cache_line_addr_match != 0)) | (state == UPDATE_CACHE);

	/*
	 *	Regs for multiplexer output
	 */
	wire [7:0]		buf0;
	wire [7:0]		buf1;
	wire [7:0]		buf2;
	wire [7:0]		buf3;

	assign 			buf0	= cache_word[7:0];
	assign 			buf1	= cache_word[15:8];
	assign 			buf2	= cache_word[23:16];
	assign 			buf3	= cache_word[31:24];

	/*
	 *	Byte select decoder
	 */
	wire bdec_sig0;
	wire bdec_sig1;
	wire bdec_sig2;
	wire bdec_sig3;

	// Select byte 0 if both address buffer offset positions are 0
	assign bdec_sig0 = (~addr_buf_byte_offset[1]) & (~addr_buf_byte_offset[0]);
	// Select byte 1 if  address buffer offset is 01
	assign bdec_sig1 = (~addr_buf_byte_offset[1]) & (addr_buf_byte_offset[0]);
	// Select byte 2 if  address buffer offset is 10
	assign bdec_sig2 = (addr_buf_byte_offset[1]) & (~addr_buf_byte_offset[0]);
	// Select byte 3 if  address buffer offset is 11
	assign bdec_sig3 = (addr_buf_byte_offset[1]) & (addr_buf_byte_offset[0]);


	/*
	 *	Constructing the word to be replaced for write byte
	 */
	wire[7:0] byte_r0;
	wire[7:0] byte_r1;
	wire[7:0] byte_r2;
	wire[7:0] byte_r3;
 
	// Assign byte in current_write_data if that relevant byte is selected
	assign byte_r0 = (bdec_sig0==1'b1) ? current_write_data[7:0] : buf0;
	assign byte_r1 = (bdec_sig1==1'b1) ? current_write_data[7:0] : buf1;
	assign byte_r2 = (bdec_sig2==1'b1) ? current_write_data[7:0] : buf2;
	assign byte_r3 = (bdec_sig3==1'b1) ? current_write_data[7:0] : buf3;

	/*
	 *	For write halfword
	 */
	
	wire[15:0] halfword_r0;
	wire[15:0] halfword_r1;

	// Assign data in current_write_data to halfword if relevant halfword is selected
	assign halfword_r0 = (addr_buf_byte_offset[1]==1'b1) ? {buf1, buf0} : current_write_data[15:0];
	assign halfword_r1 = (addr_buf_byte_offset[1]==1'b1) ? current_write_data[15:0] : {buf3, buf2};

	/* a is current_sign_mask[2], b is current_sign_mask[1], c is current_sign_mask[0] */
	// I.e., b= 1 if byte or halfword, c = 1 unless loading/storing, a = 1 if word

	// Select halfword
	wire write_select0;
	// Select fullword
	wire write_select1;
	
	wire[31:0] write_out1;
	// Replace write_out2 directly with the current_write_data to reduce wiring -> reduce power ?
	
	assign write_select0 = ~current_sign_mask[2] & current_sign_mask[1];
	assign write_select1 = current_sign_mask[2];
	
	assign write_out1 = (write_select0) ? {halfword_r1, halfword_r0} : {byte_r3, byte_r2, byte_r1, byte_r0};
	
	// Replacement word is write_out2 if we selected to write entire word
	assign replacement_word = (write_select1) ? current_write_data : write_out1;
	
	wire[`CACHE_LINE_MAX_BIT:0] cache_write_data_original;
	reg[`CACHE_LINE_MAX_BIT:0] cache_write_data_updated;
	
	assign cache_write_data_original = (state == IN_CACHE) ? accessed_line_data : cache_line_from_memory;
	
	generate
		always @ (*) begin
			cache_write_data_updated = cache_write_data_original;
			// might be wrong, check it is accessing the correct word !!!!!!!!!!!!!!!!!!!!
			cache_write_data_updated[{current_address[`CACHE_LINE_SIZE_BYTES_LOG_MINUS_ONE:2],5'b0}:{current_address[`CACHE_LINE_SIZE_BYTES_LOG_MINUS_ONE:2],5'b1}] = replacement_word;
		end
	endgenerate
	
	assign cache_write_data = current_memwrite ? cache_write_data_updated : cache_write_data_original;

	/*
	 *	Combinational logic for generating 32-bit read data
	 */
	
	wire select0;
	wire select1;
	wire select2;
	
	wire[31:0] out1;
	wire[31:0] out2;
	wire[31:0] out3;
	wire[31:0] out5;
	wire[31:0] out6;

	/* a is current_sign_mask[2], b is current_sign_mask[1], c is current_sign_mask[0]
	 * d is addr_buf_byte_offset[1], e is addr_buf_byte_offset[0]
	 */
	
	//~a~b~de + ~ade + ~abd
	assign select0 = (~current_sign_mask[2] & ~current_sign_mask[1] & ~addr_buf_byte_offset[1] & addr_buf_byte_offset[0]) | (~current_sign_mask[2] & addr_buf_byte_offset[1] & addr_buf_byte_offset[0]) | (~current_sign_mask[2] & current_sign_mask[1] & addr_buf_byte_offset[1]);
	
	// ~a~bd + ab 
	// current_sign_mask[2] = 1 only iff current_sign_mask[1] = 1 -> current_sign_mask[2] & current_sign_mask[1] = current_sign_mask[2] -> ~a~bd + a
	assign select1 = (~current_sign_mask[2] & ~current_sign_mask[1] & addr_buf_byte_offset[1]) | current_sign_mask[2];
	
	// 1 when we are reading halfword or word
	assign select2 = current_sign_mask[1]; // b
	
	assign out1 = (select0) ? ((current_sign_mask[3]==1'b1) ? {{24{buf1[7]}}, buf1} : {24'b0, buf1}) : ((current_sign_mask[3]==1'b1) ? {{24{buf0[7]}}, buf0} : {24'b0, buf0});
	assign out2 = (select0) ? ((current_sign_mask[3]==1'b1) ? {{24{buf3[7]}}, buf3} : {24'b0, buf3}) : ((current_sign_mask[3]==1'b1) ? {{24{buf2[7]}}, buf2} : {24'b0, buf2});
	assign out3 = (select0) ? ((current_sign_mask[3]==1'b1) ? {{16{buf3[7]}}, buf3, buf2} : {16'b0, buf3, buf2}) : ((current_sign_mask[3]==1'b1) ? {{16{buf1[7]}}, buf1, buf0} : {16'b0, buf1, buf0});
	
	assign out5 = (select1) ? out2 : out1;
	// If out4 = 0, and select0 = select1 = 1, then out6 is 0 -> effectively OFF -> out4 only has an effect when it is non-zero
	assign out6 = (select1) ? {buf3, buf2, buf1, buf0} : out3;
	
	assign read_buf = (select2) ? out6 : out5;
	
	/*
	 *	This uses Yosys's support for nonzero initial values:
	 *
	 *		https://github.com/YosysHQ/yosys/commit/0793f1b196df536975a044a4ce53025c81d00c7f
	 *
	 *	Rather than using this simulation construct (`initial`),
	 *	the design should instead use a reset signal going to
	 *	modules in the design.
	 */
	initial begin
		$readmemh("programs/data.hex", data_block);
		clk_stall = 0;
	end

	/*
	 *	LED register interfacing with I/O
	 */
	always @(posedge clk) begin
		if(memwrite == 1'b1 && addr == 32'h2000) begin
			led_reg <= write_data;
		end
	end

	/*
	 *	State machine
	 */
	always @(posedge clk) begin
		case (state)
			IN_CACHE: begin
				clk_stall <= 0;
				memread_buf <= memread;
				memwrite_buf <= memwrite;
				write_data_buffer <= write_data;
				addr_buf <= addr;
				sign_mask_buf <= sign_mask;
				if (memwrite == 1'b1 || memread == 1'b1) begin
					if (cache_line_addr_match != 0) begin
						read_data <= read_buf;
					end
					else begin
						state <= ACCESS_MEMORY;
						clk_stall <= 1;
					end
				end
			end
			ACCESS_MEMORY: begin
				if (!accessed_line_dirty) begin
					data_block[accessed_line_stored_addr - 32'h1000] <= accessed_line_data;
				end
				cache_line_from_memory <= data_block[accessed_line_stored_addr - 32'h1000];
				state <= UPDATE_CACHE;
			end
			UPDATE_CACHE: begin
				clk_stall <= 0;
				state <= IN_CACHE;
			end
		endcase
	end

	/*
	 *	Test led
	 */
	assign led = led_reg[7:0];
	assign check0 = cache_write;
endmodule
