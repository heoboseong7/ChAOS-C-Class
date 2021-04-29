#include <stdio.h>

void say_hello()
{
    printf("Hello\n");
    return;
    printf("여기는 실행 안됨\n");
}

void say_hello2()
{
    printf("Hello2\n");
    printf("여기는 실행 됨\n");
}

int main()
{
    say_hello();
    say_hello2();
}
