#include <stdio.h>

int main()
{
    int n;
    printf("n을 입력해주세요 : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
