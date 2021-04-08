#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // 1: 콜라 2: 사이다 3: 물
    switch (n)
    {
    case 1:
        printf("콜라를 선택하셨습니다\n");
        break;
    case 2:
        printf("사이다를 선택하셨습니다\n");
        break;
    case 3:
        printf("물을 선택하셨습니다\n");
        break;
    default:
        printf("잘못 입력하셨습니다\n");
        break;
    }

    return 0;
}
