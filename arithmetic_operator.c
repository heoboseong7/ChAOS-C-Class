#include <stdio.h>

int main()
{
    int x = 0;
    x = x + 1;
    printf("x = %d\n", x);

    int a;
    // a의 값이 1인 상태에서 진행 후 1을 더한다.
    a = 1;
    printf("a = %d\n", a++);
    printf("after a++ = %d\n", a);

    // a의 값이 1인 상태에서 더한 후 진행한다.
    a = 1;
    printf("a = %d\n", ++a);
    printf("after ++a = %d\n", a);

    return 0;
}
