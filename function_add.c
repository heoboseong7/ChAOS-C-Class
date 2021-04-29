#include <stdio.h>

int add2(int a, int b)
{
    int c = a + b;
    return c;
}

int add22(int a, int b);

int main()
{
    int aa = 3, bb = 5;
    int sum = add2(aa, bb);
    printf("%d\n", sum);
    sum = add22(aa, bb);
    printf("%d\n", sum);
    return 0;
}

int add22(int a, int b)
{
    return a + b;
}
