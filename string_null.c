#include <stdio.h>

int main()
{
    // 문자열의 마지막에 '\0'을 자동으로 넣어준다.
    char s[100] = {"Hello"};
    //char s[100] = {'H', 'e', 'l', 'l', 'o', '\0'};
    // 같은 의미
    printf("%s\n", s);
    return 0;
}
