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
 *		This module implements an adder for use by the branch unit
 *		and program counter increment among other things.
 */



module shift_dsp(input1, input2, out);
	input [15:0]	input1;
	input [15:0]	input2;
	output [31:0]	out;

	// A x B (16x16)

	/* Instantiating DSP module*/
	SB_MAC16 i_sbmac16
		(
		.A(input1),
		.B(input2),
		.C(),
		.D(),
		.O(out),
		.CLK(),			// Asynchronous 
		.CE(1'b0),   	// Disable Clock
		.IRSTTOP(),		// Resets don't matter since not registered = not using D-latches
		.IRSTBOT(),
		.ORSTTOP(),
		.ORSTBOT(),
		.AHOLD(),			//  Holds don't matter since not registered
		.BHOLD(),
		.CHOLD(),
		.DHOLD(),
		.OHOLDTOP(),		// Doesn't matter, output not registered
		.OHOLDBOT(),
		.OLOADTOP(),	
		.OLOADBOT(),
		.ADDSUBTOP(),	// 0: Add; 1: subtract
		.ADDSUBBOT(),	// 0: Add; 1: subtract
		.CO(),
		.CI(),
		//MAC cascading ports.
		.ACCUMCI(),
		.ACCUMCO(),
		.SIGNEXTIN(),
		.SIGNEXTOUT()
		);
	
		defparam i_sbmac16.B_SIGNED = 1'b0 ;					// 0: unsigned
		defparam i_sbmac16.A_SIGNED = 1'b0 ;
		defparam i_sbmac16.MODE_8x8 = 1'b1 ;					// 1: Power saving mode 
		defparam i_sbmac16.BOTADDSUB_CARRYSELECT = 2'b00 ;		// 00: Carry in = 0 (doesn't matter)
		defparam i_sbmac16.BOTADDSUB_UPPERINPUT = 1'b1 ;		// 1: input D (doesn't matter)
		defparam i_sbmac16.BOTADDSUB_LOWERINPUT = 2'b00 ;		// 00: input B (doesn't matter)
		defparam i_sbmac16.BOTOUTPUT_SELECT = 2'b11 ;			// 11: Lower 16-bit output from 16x16 multiplier
		defparam i_sbmac16.TOPADDSUB_CARRYSELECT = 2'b11 ;		// 00: default value (doesn't matter)
		defparam i_sbmac16.TOPADDSUB_UPPERINPUT = 1'b1 ;		// 1: input C (doesn't matter)
		defparam i_sbmac16.TOPADDSUB_LOWERINPUT = 2'b00 ;		// 00: input A (doesn't matter)
		defparam i_sbmac16.TOPOUTPUT_SELECT = 2'b11 ;  			// 11: Upper 16-bit output from 16x16 multiplier
		defparam i_sbmac16.PIPELINE_16x16_MULT_REG2 = 1'b0 ;	// default values(0), pipeline not registered
		defparam i_sbmac16.PIPELINE_16x16_MULT_REG1 = 1'b0 ;
		defparam i_sbmac16.BOT_8x8_MULT_REG = 1'b0 ;
		defparam i_sbmac16.TOP_8x8_MULT_REG = 1'b0 ;
		defparam i_sbmac16.D_REG = 1'b0 ;  						// default values (0), A, B, C, D not registered
		defparam i_sbmac16.B_REG = 1'b0 ;
		defparam i_sbmac16.A_REG = 1'b0 ;
		defparam i_sbmac16.C_REG = 1'b0 ;

endmodule
