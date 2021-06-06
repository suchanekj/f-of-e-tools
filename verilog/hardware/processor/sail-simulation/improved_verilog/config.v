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

`define USE_CORRELATING
//`define USE_ONE_BIT //Cannot be defined IF USE_CORRELATING is defined too!
`define USE_BRANCH 
//`define USE_STATIC //Cannot be defined IF USE_CORRELATING is defined too!


// memory

`define USE_CACHE_MEMORY

`define MULTIPLE_CACHE_LINES
//`define MULTIPLE_WORDS_PER_LINE

`define CACHE_LINE_MAX_BIT 31
`define CACHE_LINE_SIZE_WORDS 1
`define CACHE_LINE_SIZE_BYTES_LOG 2
`define CACHE_LINE_NUMBER 2
`define CACHE_LINE_NUMBER_LOG 1

`define MEMORY_SIZE_LINES 1023

`define USE_SMALL_DATA_ADDR
`define USE_MEMORY_OPTIMIZATIONS
