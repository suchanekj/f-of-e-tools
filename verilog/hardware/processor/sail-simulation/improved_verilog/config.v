// DSP blocks

//`define USE_ADDER_DSP
//`define USE_SUBTRACTOR_DSP

 
// Clock

`define USE_PLL_CLK
`define CLK_PLL_DIVF 7'b0111111
`define CLK_PLL_DIVR 4'b0010
`define CLK_PLL_DIVQ 3'b110
`define CLK_PLL_DIV_REG 1  // must be undefined or at least 1

`define CLK_NOPLL_DIV "0b11"


// branch prediction

`define USE_CORRELATING
//`define USE_ONE_BIT //Cannot be defined IF USE_CORRELATING is defined too!
`define USE_BRANCH
//`define USE_STATIC //Cannot be defined IF USE_CORRELATING is defined too!

// memory

`define USE_CACHE_MEMORY

`define CACHE_LINE_MAX_BIT 63
`define CACHE_LINE_SIZE_WORDS 2
`define CACHE_LINE_SIZE_BYTES_LOG 3
`define CACHE_LINE_SIZE_BYTES_LOG_MINUS_ONE 2 // At least 2
`define CACHE_LINE_ADDRESS_MAX_BIT 10
`define CACHE_LINE_NUMBER 2
`define CACHE_LINE_NUMBER_MINUS_ONE 1
`define CACHE_LINE_NUMBER_LOG_MINUS_ONE 0

`define USE_SMALL_DATA_ADDR
`define USE_MEMORY_OPTIMIZATIONS
