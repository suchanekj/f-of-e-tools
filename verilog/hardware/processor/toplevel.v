/*
	Authored 2018-2019, Ryan Voo.

	All rights reserved.
	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions
	are met:

	*	Redistributions of source code must retain the above
		copyright notice, this list of conditions and the following
		disclaimer.

	*	Redistributions in binary form must reproduce the above
		copyright notice, this list of conditions and the following
		disclaimer in the documentation and/or other materials
		provided with the distribution.

	*	Neither the name of the author nor the names of its
		contributors may be used to endorse or promote products
		derived from this software without specific prior written
		permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
	"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
	FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
	COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
	INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
	BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
	CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
	LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
	ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
	POSSIBILITY OF SUCH DAMAGE.
*/


/*
 *	top.v
 *
 *	Top level entity, linking cpu with data and instruction memory.
 */


module top (led);
	output [7:0]	led;

	wire		clk_proc;
	wire		data_clk_stall;
	
	wire		clk;
	
	wire 		clk_hf;
	wire 		clk_pre_div;
	
	`ifdef CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
		wire	clk_double;
	`endif
	
	/*
	 *	Use the iCE40's hard primitive for the clock source.
	 */
	/*`ifdef USE_HFOSC
		reg		ENCLKHF		= 1'b1;	// Plock enable
		reg		CLKHF_POWERUP	= 1'b1;	// Power up the HFOSC circuit
		
		SB_HFOSC #(.CLKHF_DIV(`CLK_BASE_DIV)) OSCInst0 (
			.CLKHFEN(ENCLKHF),
			.CLKHFPU(CLKHF_POWERUP),
			.CLKHF(clk_hf)
		);
	`else
		reg ENCLKLF = 1'b1; // Plock enable
		reg CLKLF_POWERUP = 1'b1; // Power up the LFOSC circuit
		
		SB_LFOSC OSCInst0 (
			.CLKLFEN(ENCLKLF),
			.CLKLFPU(CLKLF_POWERUP),
			.CLKLF(clk_hf)
		);
	`endif
	 
	`ifdef USE_PLL_CLK
		pll_clk pll_clk_inst(
			.clk_hf(clk_hf),
			.clk(clk_pre_div)
		);
	`else
		assign clk_pre_div = clk_hf;
	`endif
	
	`ifdef CLK_DIV_REG
		clk_divisor clkdivider(
			.clk_hf(clk_pre_div),
			`ifdef CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
				.clk_double(clk_double),
			`endif
			.clk(clk)
		);
	`else
		assign clk = clk_pre_div;
	`endif*/
	
	reg		ENCLKHF		= 1'b1;	// Plock enable
	reg		CLKHF_POWERUP	= 1'b1;	// Power up the HFOSC circuit
	
	/*SB_HFOSC #(.CLKHF_DIV("0b11")) OSCInst0 (
		.CLKHFEN(ENCLKHF),
		.CLKHFPU(CLKHF_POWERUP),
		.CLKHF(clk)
	);*/
	
	SB_HFOSC #(.CLKHF_DIV("0b00")) OSCInst0 (
		.CLKHFEN(ENCLKHF),
		.CLKHFPU(CLKHF_POWERUP),
		.CLKHF(clk_hf)
	);
	
	reg			divider_reg_0;
	reg			divider_reg_1;
	//reg			divider_reg_2;
	wire[0:0]	clk_mf;
	
	assign clk_mf[0] = divider_reg_0;
			
	always @(posedge clk_hf) begin
		divider_reg_0 <= !divider_reg_0;
	end
	
	assign clk = divider_reg_1;
			
	always @(posedge clk_mf[0]) begin
		divider_reg_1 <= !divider_reg_1;
	end
	
	/*assign clk = divider_reg_2;
			
	always @(posedge clk_mf[1]) begin
		divider_reg_2 <= !divider_reg_2;
	end*/
	
	initial begin
		divider_reg_0 = 0;
		divider_reg_1 = 0;
		//divider_reg_2 = 0;
	end
	
	`ifdef CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
		assign clk_double = clk_mf[1];
	`endif

	/*
	 *	Memory interface
	 */
	wire[31:0]	inst_in;
	wire[31:0]	inst_out;
	wire[31:0]	data_out;
	`ifdef USE_SMALL_DATA_ADDR
		 // Change size of data_addr to be consistent with data_mem
		wire[13:0]	data_addr;
	`else
		wire[31:0]	data_addr;
	`endif
	wire[31:0]	data_WrData;
	wire		data_memwrite;
	wire		data_memread;
	wire[3:0]	data_sign_mask;


	cpu processor(
		.clk(clk_proc),
		.inst_mem_in(inst_in),
		.inst_mem_out(inst_out),
		.data_mem_out(data_out),
		.data_mem_addr(data_addr),
		.data_mem_WrData(data_WrData),
		.data_mem_memwrite(data_memwrite),
		.data_mem_memread(data_memread),
		.data_mem_sign_mask(data_sign_mask)
	);

	instruction_memory inst_mem(
		.addr(inst_in), 
		.out(inst_out)
	);

	`ifdef USE_CACHE_MEMORY
		`ifdef CACHE_DELAY_OUTPUT
			reg clk_delayed;
		
			always @(posedge clk_hf) begin
				clk_delayed <= clk;
			end
		`endif
		
		data_mem_cached data_mem_inst(
			.clk(clk),
			`ifdef CACHE_DELAY_OUTPUT
				.clk_delayed(clk_delayed),
			`endif
			`ifdef CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
				.clk_double(clk_double),
			`endif
			.addr(data_addr),
			.write_data(data_WrData),
			.memwrite(data_memwrite), 
			.memread(data_memread), 
			.read_data(data_out),
			.sign_mask(data_sign_mask),
			.led(led),
			.clk_stall(data_clk_stall)
		);

	`else
		data_mem data_mem_inst(
			.clk(clk),
			.addr(data_addr),
			.write_data(data_WrData),
			.memwrite(data_memwrite), 
			.memread(data_memread), 
			.read_data(data_out),
			.sign_mask(data_sign_mask),
			.led(led),
			.clk_stall(data_clk_stall)
		);
	`endif

	assign clk_proc = (data_clk_stall) ? 1'b1 : clk;
endmodule
