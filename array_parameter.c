#include <stdio.h>

int sum(int array[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += array[i];
    }
    return result;
}

int main()
{
    int array[] = {5, 10, 15, 20};
    int s = sum(array, 4);
    printf("\nSum is %d\n\n", s);
    s = sum(array + 1, 3);
    printf("Sum 1 to 3 = %d", s);
    return 0;
}
