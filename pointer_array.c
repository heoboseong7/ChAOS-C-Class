#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int *parr[3] = {&a, &b, &c};

    for (int i = 0; i < 3; i++)
    {
        printf("*parr[%d] = %d\n", i, *parr[i]);
    }
    return 0;
}
