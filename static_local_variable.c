#include <stdio.h>

int static_f()
{
    static int count = 0;
    count++;
    return count;
}

int f()
{
    int count = 0;
    count++;
    return count;
}

int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        printf("%d: static_f = %d, f = %d\n", i, static_f(), f());
    }

    return 0;
}
