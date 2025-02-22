#include "sf-types.h"
#include "bsort.h"
#include "bsort-input.h"
#include "string.h"

void run(void)
{
        int i;
        int maxindex = bsort_input_len - 1;

        uchar bsort_input_copied[bsort_input_len];
        memcpy(&bsort_input_copied, &bsort_input, bsort_input_len);

		for(i = 0; i < 100; i++)
		{
			uchar bsort_input_copied_[bsort_input_len];
			memcpy(&bsort_input_copied_, &bsort_input, bsort_input_len);
		}

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
