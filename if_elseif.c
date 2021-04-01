#include <stdio.h>

int main()
{
    int score;
    printf("점수를 입력해 주세요 : ");
    scanf("%d", &score);

    if (score >= 95)
        printf("A+\n");
    else if (score >= 90)
        printf("A\n");
    else if (score >= 85)
        printf("B+\n");
    else if (score >= 80)
        printf("B\n");

    return 0;
}
