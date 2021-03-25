#include <stdio.h>

int main()
{
    float a = 1.;
    for (float i = 1.0; i > 0; i -= 0.1)
    {
        printf("%f\n", i);
    }

    return 0;
}