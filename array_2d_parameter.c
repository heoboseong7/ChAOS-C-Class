#include <stdio.h>

int sum2d(int array[][3], int n, int m)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result += array[i][j];
        }
    }
    return result;
}

int main()
{
    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = sum2d(array, 3, 3);
    printf("\nSum is %d\n\n", sum);

    return 0;
}
