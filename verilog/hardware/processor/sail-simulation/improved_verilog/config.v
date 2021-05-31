// DSP blocks

//`define USE_ADDER_DSP
//`define USE_SUBTRACTOR_DSP

 
// Clock

//`define USE_PLL_CLK
`define CLK_PLL_DIVF 0
`define CLK_PLL_DIVR 2
`define CLK_PLL_DIVQ 0
`define CLK_PLL_DIV_REG 1  // must be undefined or at least 1

`define CLK_NOPLL_DIV "0b11"


// branch prediction

//`define USE_CORRELATING


// memory

`define USE_CACHE_MEMORY

`define CACHE_LINE_MAX_BIT 127
`define CACHE_LINE_SIZE_WORDS 4
`define CACHE_LINE_SIZE_BYTES_LOG 4
`define CACHE_LINE_SIZE_BYTES_LOG_MINUS_ONE 3
`define CACHE_LINE_ADDRESS_MAX_BIT 9
`define CACHE_LINE_NUMBER 8
`define CACHE_LINE_NUMBER_MINUS_ONE 7
`define CACHE_LINE_NUMBER_LOG_MINUS_ONE 2

`define USE_SMALL_DATA_ADDR
`define USE_MEMORY_OPTIMIZATIONS
