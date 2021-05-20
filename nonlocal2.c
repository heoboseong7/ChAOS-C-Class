#include <stdio.h>

int global = 11111;
void ff();

void ff()
{
    printf("\"global + 3\" in nonlocal2 = %d\n", global + 3);
}
