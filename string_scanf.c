#include <stdio.h>

int main()
{
    char s[100];
    printf("문자열을 입력해주세요 : ");
    //scanf("%s", s);
    scanf("%[^\n]s", s);
    printf("입력된 문자열 : %s\n", s);

    return 0;
}
