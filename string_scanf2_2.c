#include <stdio.h>

int main()
{
    char s[100];
    printf("문자열을 입력해주세요: ");
    scanf("%s", s);
    printf("입력된 문자열 : %s\n", s);

    getchar();

    char c;
    printf("문자 하나를 입력해주세요: ");
    scanf("%c", &c);
    printf("입력된 문자 : %c\n", c);
    return 0;
}
