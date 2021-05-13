#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return;
}

int main()
{
    int a = 10, b = 20;
    printf("\nbefore swap\n");
    printf("a: %d b: %d\n", a, b);
    swap(&a, &b);

    printf("after swap\n");
    printf("a: %d b: %d\n\n", a, b);
    return 0;
}
