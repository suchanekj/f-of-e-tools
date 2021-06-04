// DSP blocks

`define USE_ADDER_DSP
`define USE_SUBTRACTOR_DSP
`define USE_ANDXOR_DSP
`define USE_COMBIADDER_DSP
 
// Clock

//`define USE_PLL_CLK
`define USE_HFOSC // cannot be defined at the same time as USE_PLL_CLK

/* NEXT 5 MUST ALWAYS BE DEFINED*/
`define CLK_PLL_DIVF 7'b0111111
`define CLK_PLL_DIVR 4'b0010
`define CLK_PLL_DIVQ 3'b110
`define CLK_PLL_DIV_REG 2  // must be undefined or at least 1 (2 according to code)
`define CLK_NOPLL_DIV "0b10"


// branch prediction

`define USE_CORRELATING
//`define USE_ONE_BIT //Cannot be defined if USE_CORRELATING is defined too!
//`define USE_BRANCH // USE_CORRELATING must be defined too!
//`define USE_STATIC //Cannot be defined if USE_CORRELATING is defined too!

// memory

`define USE_SMALL_DATA_ADDR // Suspect it has no effect -> "WARNING resizing ..." when running yosys
`define USE_MEMORY_OPTIMIZATIONS
