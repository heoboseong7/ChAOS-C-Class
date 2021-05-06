#include <stdio.h>

int main()
{
    int score[5] = {10, 50, 30, 40};
    printf("1: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", score[i]);
    }
    printf("\n");

    // error!
    // score = {100, 200, 300, 400, 500};
    score[4] = 500;

    printf("2: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", score[i]);
    }
    printf("\n");

    return 0;
}