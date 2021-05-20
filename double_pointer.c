#include <stdio.h>

int main()
{
    int a = 100;
    int *pi = &a;
    int **ppi = &pi;
    printf("a : %d\n*pi = %d\n**pi = %d\n", a, *pi, **ppi);

    int ***pppi = &ppi;
    ***pppi = **ppi + 50;
    printf("***pppi = %d\n", ***pppi);

    return 0;
}
