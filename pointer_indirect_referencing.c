#include <stdio.h>

int main()
{
    int var = 123;
    int *pvar = &var;
    printf("간접 참조 : %d\n", *pvar);

    *pvar = 321;
    printf("직접 참조 : %d\n", var);

    return 0;
}
