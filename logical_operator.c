#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    printf("(a < b) && (a == b) : %d\n", (a < b) && (a == b));
    printf("(a == b) || (a < b): %d\n", (a == b) || (a < b));
    printf("!(a == b) : %d\n", !(a == b));

    return 0;
}
