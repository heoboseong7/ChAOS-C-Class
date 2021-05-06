#include <stdio.h>

int main()
{
    int var = 123;
    int *pvar;
    pvar = &var;
    printf("var: %d\npvar: %p\n&var: %p\n", var, pvar, &var);

    return 0;
}
