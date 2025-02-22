// DSP blocks

//`define USE_ADDER_DSP
//`define USE_SUBTRACTOR_DSP
//`define USE_ANDXOR_DSP
//`define USE_COMBIADDER_DSP
//`define USE_SHIFT_DSP
 
// Clock

//`define USE_PLL_CLK
`define USE_HFOSC // cannot be defined at the same time as USE_PLL_CLK

`define CLK_PLL_DIVF 7'b0111111
`define CLK_PLL_DIVR 4'b0010
`define CLK_PLL_DIVQ 3'b110
`define CLK_PLL_DIV_REG 2  // must be undefined or at least 1
`define CLK_NOPLL_DIV "0b11"


// branch prediction

`define USE_CORRELATING
//`define USE_ONE_BIT //Cannot be defined if USE_CORRELATING is defined too!
`define USE_BRANCH // USE_CORRELATING must be defined too!
//`define USE_STATIC //Cannot be defined if USE_CORRELATING is defined too!

// memory

`define USE_SMALL_DATA_ADDR // Suspect it has no effect -> "WARNING resizing ..." when running yosys
`define USE_MEMORY_OPTIMIZATIONS

//`define USE_CACHE_MEMORY

//`define MULTIPLE_CACHE_LINES
//`define MULTIPLE_WORDS_PER_LINE
//`define CACHE_DELAY_OUTPUT

//`define CACHE_READ_IN_ONE_CYCLE  // needs to be defined iff either is defined below
//`define CACHE_READ_BUFFER_AT_NEGEDGE
//`define CACHE_READ_BUFFER_AT_DOUBLE_CLOCK
//`define CACHE_READ_BUFFER_AT_INITIAL_STATE

`define CACHE_LINE_MAX_BIT 31
`define CACHE_LINE_SIZE_WORDS 1
`define CACHE_LINE_SIZE_BYTES_LOG 2
`define CACHE_LINE_NUMBER 1
`define CACHE_LINE_NUMBER_LOG 0

`define MEMORY_SIZE_LINES 1023
