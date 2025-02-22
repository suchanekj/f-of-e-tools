#include "sf-types.h"
#include "bsort.h"
#include "bsort-input.h"
#include "string.h"

void run(void)
{
        int i, dummy = 0;
        int maxindex = bsort_input_len - 1;

        uchar bsort_input_copied[bsort_input_len];
        memcpy(&bsort_input_copied, &bsort_input, bsort_input_len);

        while (maxindex > 0)
        {
                for (i = 0; i < maxindex; i++)
                {
                        if (bsort_input_copied[i] > bsort_input_copied[i+1])
                        {
                                /*              swap            */
                                bsort_input_copied[i] ^= bsort_input_copied[i+1];
                                bsort_input_copied[i+1] ^= bsort_input_copied[i];
                                bsort_input_copied[i] ^= bsort_input_copied[i+1];
                        }
                        if (bsort_input_copied[i] > bsort_input_copied[i+1])
                        {
							dummy++;
                        }
                        if (bsort_input_copied[i / 2] > bsort_input_copied[i / 2 + 1])
                        {
							dummy++;
                        }
                        if (bsort_input_copied[maxindex - i] > bsort_input_copied[maxindex - (i + 1)])
                        {
							dummy++;
                        }
                        if (bsort_input_copied[maxindex - i / 2] > bsort_input_copied[maxindex - (i / 2 + 1)])
                        {
							dummy++;
                        }
                }

                maxindex--;
        }
}

int main(void)
{
        while (1)
        {
                *gDebugLedsMemoryMappedRegister = 0xFFFFFFFF;
                run();
                *gDebugLedsMemoryMappedRegister = 0x00000000;
                run();
        }
        return 0;
}
