#include <stdio.h>

int main()
{
    char s[100] = "AAAAA";
    printf("수정 이전 : %s\n", s);
    s[6] = 'X';
    s[2] = 'B';
    printf("수정 이후 : %s\n", s);

    return 0;
}
