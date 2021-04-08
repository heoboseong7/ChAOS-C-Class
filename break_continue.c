#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d : ", i);
        if (i > 1)
            break;
        printf("break\n");
    }
    printf("\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d : ", i);
        if (i > 1)
            continue;
        printf("continue\n");
    }

    return 0;
}
