#include <stdio.h>

int max2(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int simpleMax(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int M;
    int a = 30, b = 50;

    if (a > b)
        M = a;
    else
        M = b;

    printf("%d\n", M);

    M = max2(a, b);
    printf("%d\n", M);
    printf("%d %d\n", max2(56, 32), max2(22, 33));

    return 0;
}
