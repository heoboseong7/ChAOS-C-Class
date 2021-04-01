#include <stdio.h>

int main()
{
    int s_id;
    printf("학번을 입력해 주세요 : ");
    scanf("%d", &s_id);

    if (s_id == 21)
    {
        printf("새내기 입니다.\n");
    }
    else
    {
        printf("화석입니다.\n");
    }

    return 0;
}
