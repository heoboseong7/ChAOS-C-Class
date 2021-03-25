#include <stdio.h>

int main()
{
    int a;
    float pi;
    char c;
    scanf("%d %f %c", &a, &pi, &c);
    // 이렇게 한번에 여러개도 가능하다.
    printf("%d\n%f\n%c\n", a, pi, c);

    return 0;
}
