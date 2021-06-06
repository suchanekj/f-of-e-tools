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



`include "../include/rv32i-defines.v"
`include "../include/sail-core-defines.v"



/*
 *	Description:
 *
 *		This module implements the ALU for the RV32I.
 */



/*
 *	Not all instructions are fed to the ALU. As a result, the ALUctl
 *	field is only unique across the instructions that are actually
 *	fed to the ALU.
 */
module alu(ALUctl, A, B, ALUOut, Branch_Enable);
	input [6:0]		ALUctl;
	input [31:0]		A;
	input [31:0]		B;
	output reg [31:0]	ALUOut;
	output reg		Branch_Enable;

	reg [31:0] inputA;
	reg [31:0] inputB;
	reg [31:0] inputA1;
	reg [31:0] inputB1;
	reg [31:0] inputA2;
	reg [31:0] inputB2;
	reg [4:0]  inputB3;
	reg addsub_in;
	reg [31:0] add_output;
	reg [31:0] sub_output;
	`ifdef USE_LSHIFT_DSP
		reg [31:0] lshift_output;
	`endif
	reg [31:0] andxor_output;
	reg [31:0] andxor_output1;
	reg [31:0] andxor_output2;
	integer i;
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
		inputA = 0;
		inputB = 0;
		inputA1 = 0;
		inputB1 = 0;
		inputA2 = 0;
		inputB2 = 0;
		inputB3 = 0;
		addsub_in = 1'b0;

		ALUOut = 32'b0;
		Branch_Enable = 1'b0;
	end

	`ifdef USE_ADDER_DSP
		adder_dsp alu_adder(
			.input1(inputA),
			.input2(inputB),
			.addsub(1'b0),
			.out(add_output)
		);
	`endif 

	`ifdef USE_SUBTRACTOR_DSP
		subtractor_dsp alu_subtractor(
			.input1(inputB),
			.input2(inputA),
			.out(sub_output)
		);
	`endif 

	`ifdef USE_ANDXOR_DSP

		adder_dsp alu_andxor1(
			.input1(inputA1),
			.input2(inputB1),
			.addsub(1'b0),
			.out(andxor_output1)
		);

		adder_dsp alu_andxor2(
			.input1(inputA2),
			.input2(inputB2),
			.addsub(1'b0),
			.out(andxor_output2)
		);
	`endif

	`ifdef USE_LSHIFT_DSP
		leftshift_dsp left_shift(
			.input1(inputA),
			.input2(inputB3),
			.out(lshift_output)
		);
	`endif
	
	always @(ALUctl, A, B) begin
		
		`ifdef USE_ANDXOR_DSP

			for (i=0; i < 16; i = i + 1) begin
				inputA1[2*i] = A[i];
				inputB1[2*i] = B[i];
			end

			for (i=0; i < 16; i = i + 1) begin
				inputA2[2*i] = A[i+16];
				inputB2[2*i] = B[i+16];
			end

		`endif

		`ifdef USE_LSHIFT_DSP
			inputB3 = B[4:0];
		`endif	

		inputA = A;
		inputB = B;

		case (ALUctl[3:0])
			/*
			 *	AND (the fields also match ANDI and LUI)
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_AND:	begin
			
				`ifdef USE_ANDXOR_DSP
					/*
					addsub_in <= 1'b0;

					for (i=0; i < 16; i = i + 1) begin
						inputA[2*i] <= A[i];
						inputB[2*i] <= B[i];
					end

					for (i=0; i < 16; i = i + 1) begin
						inputA[2*i] <= A[i+16];
						inputB[2*i] <= B[i+16];
					end
					*/
					for (i=0; i < 16; i = i + 1) begin
						ALUOut[i] = andxor_output1[2*i+1];
					end

					for (i=0; i < 16; i = i + 1) begin
						ALUOut[i+16] = andxor_output2[2*i+1];
					end
					
					// ALUOut = and_output;
				`else 
					ALUOut = A & B;
				`endif 
			end
			/*
			 *	OR (the fields also match ORI)
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_OR:	ALUOut = A | B;

			/*
			 *	ADD (the fields also match AUIPC, all loads, all stores, and ADDI)
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_ADD:	begin
			
				`ifdef USE_ADDER_DSP
					// addsub_in <= 1'b0;
					ALUOut = add_output;
				`else 
					ALUOut = A + B;
				`endif 
			end
			/*
			 *	SUBTRACT (the fields also matches all branches)
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_SUB: begin

				`ifdef USE_SUBTRACTOR_DSP
					// addsub_in <= 1'b1;
					// ALUOut = add_output;
					ALUOut = sub_output;
				`else 
					ALUOut = A - B;
				`endif 

			end
			/*
			 *	SLT (the fields also matches all the other SLT variants)
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_SLT:	ALUOut = $signed(A) < $signed(B) ? 32'b1 : 32'b0;

			/*
			 *	SRL (the fields also matches the other SRL variants)
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_SRL:	ALUOut = A >> B[4:0];

			/*
			 *	SRA (the fields also matches the other SRA variants)
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_SRA:	ALUOut = A >>> B[4:0];

			/*
			 *	SLL (the fields also match the other SLL variants)
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_SLL:	begin
				`ifdef USE_LSHIFT_DSP
					ALUOut = lshift_output;
				`else	
					ALUOut = A << B[4:0];
				`endif 
			end 
			/*
			 *	XOR (the fields also match other XOR variants)
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_XOR:	begin
			
				`ifdef USE_ANDXOR_DSP
				
					for (i=0; i < 16; i = i + 1) begin
						ALUOut[i] = andxor_output1[2*i];
					end

					for (i=0; i < 16; i = i + 1) begin
						ALUOut[i+16] = andxor_output2[2*i];
					end

				`else 
					ALUOut = A ^ B;
				`endif 
			end
			/*
			 *	CSRRW  only
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_CSRRW:	ALUOut = A;

			/*
			 *	CSRRS only
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_CSRRS:	ALUOut = A | B;

			/*
			 *	CSRRC only
			 */
			`kSAIL_MICROARCHITECTURE_ALUCTL_3to0_CSRRC:	ALUOut = (~A) & B;

			/*
			 *	Should never happen.
			 */
			default:					ALUOut = 0;
		endcase
	end

	always @(ALUctl, ALUOut, A, B) begin
		case (ALUctl[6:4])
			`kSAIL_MICROARCHITECTURE_ALUCTL_6to4_BEQ:	Branch_Enable = (ALUOut == 0);
			`kSAIL_MICROARCHITECTURE_ALUCTL_6to4_BNE:	Branch_Enable = !(ALUOut == 0);
			`kSAIL_MICROARCHITECTURE_ALUCTL_6to4_BLT:	Branch_Enable = ($signed(A) < $signed(B));
			`kSAIL_MICROARCHITECTURE_ALUCTL_6to4_BGE:	Branch_Enable = ($signed(A) >= $signed(B));
			`kSAIL_MICROARCHITECTURE_ALUCTL_6to4_BLTU:	Branch_Enable = ($unsigned(A) < $unsigned(B));
			`kSAIL_MICROARCHITECTURE_ALUCTL_6to4_BGEU:	Branch_Enable = ($unsigned(A) >= $unsigned(B));

			default:					Branch_Enable = 1'b0;
		endcase
	end
endmodule
