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
 *	Description:
 *
 *		This module implements an left shift testbench to verify leftshift_dsp logic
 */



module leftshift_dsp_tb();
	reg[31:0] 	input1;
	reg[31:0] 	input2;
	wire[31:0] 	out;

	leftshift_dsp LSDSP(  
		.input1(input1),
		.input2(input2),
		.out(out)
	);
	localparam period = 2; //2s
	always begin
		$dumpfile ("leftshift_dsp.vcd");
		$dumpvars;

		input1 <= 32'b0101; //5
		input2 <= 5'h02; //2
		#period;

		input1 <= 32'b0001; //1
		input2 <= 5'h04; //4
		#period

		input1 <= 32'b00011; //3
		input2 <= 5'hF; //15
		#period

		input1 <= 32'hFABA; //64186
		input2 <= 5'h1A; // 26
		#period

		input1 <= 32'h616D2065; //maximum value of A
		input2 <= 5'h05; // 31 (maximum logical left shift)
		#period

		input1 <= 32'hFFFFFFFF; //maximum value of A
		input2 <= 5'h1F; // 31 (maximum logical left shift)
		#period
		$finish;
	end
	endmodule