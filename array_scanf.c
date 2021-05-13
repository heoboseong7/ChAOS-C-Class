#include <stdio.h>

int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", array + i);
        //scanf("%d", &array[i]); 같은 의미
        printf("array[%d] = %d\n", i, *(array + i));
    }

    return 0;
}
