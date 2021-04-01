#include <stdio.h>

int main()
{
    int my_money = 2147483647;
    printf("I have %d\n", my_money);

    my_money += 100;
    printf("I have %d\n", my_money);

    return 0;
}
