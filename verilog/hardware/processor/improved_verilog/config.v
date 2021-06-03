// DSP blocks

`define USE_ADDER_DSP
`define USE_SUBTRACTOR_DSP
`define USE_ANDXOR_DSP
`define USE_COMBIADDER_DSP
 
// Clock

`define USE_PLL_CLK
`define CLK_PLL_DIVF 7'b0111111
`define CLK_PLL_DIVR 4'b0010
`define CLK_PLL_DIVQ 3'b110
`define CLK_PLL_DIV_REG 1  // must be undefined or at least 1

`define CLK_NOPLL_DIV "0b11"


// branch prediction

// `define USE_CORRELATING
//`define USE_ONE_BIT //Cannot be defined IF USE_CORRELATING is defined too!
`define USE_BRANCH
//`define USE_STATIC //Cannot be defined IF U