#include <stdio.h>

int main()
{
    int a = 3; // 00...0011
    int b = 7; // 00...0111

    printf("a & b : %d\n", a & b);   // 0011
    printf("a | b : %d\n", a | b);   // 0111
    printf("a ^ b : %d\n", a ^ b);   // 0100
    printf("~a : %d\n", ~a);         // 11....1100
    printf("b << a : %d\n", b << a); // 111000
    printf("b >> 2 : %d\n", b >> 2); // 0001

    return 0;
}
