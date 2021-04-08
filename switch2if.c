#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // 1: 콜라 2: 사이다 3: 물
    if (n == 1)
    {
        printf("콜라를 선택하셨습니다\n");
    }
    else if (n == 2)
    {
        printf("사이다를 선택하셨습니다\n");
    }
    else if (n == 3)
    {
        printf("물을 선택하셨습니다\n");
    }
    else
    {
        printf("잘못 입력하셨습니다\n");
    }

    return 0;
}
