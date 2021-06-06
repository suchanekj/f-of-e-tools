#include "bsort.h"
int run(void)
{
    const float data[] = {-3.50, 5.99, +3.50, -5.99};
    const int data_length = sizeof(data) / sizeof(data[0]); // Division

    int a = 0;
    int b = 0;
    const int mean = 0;
    const int divisor = 2;
    int Equiv = 0;
    while (Equiv != 1 && b == 0)
    {
        float mult = 1.0;
        float dummy = 1.0078125;
        while (dummy != mean && a < 2500)
        {
            float val = 0.0;
            for (int i = 0; i < data_length; i++)
            {
                val = data[i]/data[0];
                mult *= (val);
                if (val < 0)
                {
                    mult -= 1/900;
                }
                else
                {
                    mult /= divisor;
                }
                
            };
            a += 1;
        }
        if (mean != mult || dummy == 1.0078125 || a == 2500) // Ensure loop always gets entered but still use comparisions
        {
            Equiv = 1;
        }
		b = 1;
    }
	return Equiv;
}

int main()
{
    while(1)
    {
        *gDebugLedsMemoryMappedRegister = 0x00000000;
        run();
		*gDebugLedsMemoryMappedRegister = 0xFFFFFFFF;
        run();
    }
    return 0;
}
