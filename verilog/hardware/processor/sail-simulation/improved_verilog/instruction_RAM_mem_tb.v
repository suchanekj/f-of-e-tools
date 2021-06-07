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


module instruction_RAM_mem_tb();

reg 			clk;
reg [31:0]		addr;
wire [31:0]	out;
/*
wire [1:0] check0;
wire [1:0] check1;
wire [1:0] check2;
wire [1:0] check3;
wire [1:0] check4;
*/
instruction_RAM_mem irm(
	.din(32'b0),
	.write_en(1'b0), 
	.waddr(32'b0), 
	.wclk(1'b0), 
	.raddr(addr), 
	.rclk(clk), 
	.dout(out)
	/*
	.check0(check0),
	.check1(check1),
	.check2(check2),
	.check3(check3),
	.check4(check4)
	*/
);
localparam period = 2;  //2s

//simulation
always begin
	#1 clk = ~clk;
end
initial begin
	clk = 1;
	addr = 32'b0;
end	
always @(posedge clk) 
begin
	$dumpfile ("instruction_RAM_mem.vcd");
	$dumpvars;

	//write bytes
	addr = 32'h08; 

	#period;
	addr = 32'h0C;

	#period;
	addr = 32'h10;

	#period;
	addr = 32'h14;

	#period;
	addr = 32'h3DC;
	#period;

	addr = 32'h3E0;
	#period;
	
	addr = 32'h3E4;
	#period;

	addr = 32'h3E8;
	#period;
	
	addr = 32'h3EC;
	#period;
	addr = 32'h3F0;
	#period;

	addr = 32'h3F4;
	#period;
	$finish;

end

endmodule


