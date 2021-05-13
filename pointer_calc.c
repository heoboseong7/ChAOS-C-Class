#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *p = arr + 2;
    printf("Start at *p = %d\n", *p);

    printf("++*p = %d\n", ++*p);
    printf("after ++*p = %d\n", *p);

    printf("*p++ = %d\n", *p++);
    printf("after *p++ = %d\n", *p);

    printf("*--p = %d\n", *--p);
    printf("after *--p = %d\n", *p);

    printf("(*p)-- = %d\n", (*p)--);
    printf("after (*p)-- = %d\n", *p);

    return 0;
}
