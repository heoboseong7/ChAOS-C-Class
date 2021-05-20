#include <stdio.h>

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // 서로 주소는 같지만 나타내는 타입이 다르다
    printf("arr = %p arr[0] = %p\n", arr, arr[0]);
    // 열의 개수가 3인 2차원 배열의 주소를 가질 수 있다
    int(*p)[3] = arr;
    // arr + i == arr[i]
    // 위는 i번째 행의 시작 주소를 나타낸다
    printf("**(arr + 1) = %d\n", **(arr + 1));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = %d ", i, j, *(*(arr + i) + j));
            //printf("a[%d][%d] = %d ", i, j, p[i][j]);
            //printf("a[%d][%d] = %d ", i, j, *(arr[i] + j));
            //위의 코드에서 arr을 p로 치환해도 같은 결과를 출력한다
        }
        printf("\n");
    }
    return 0;
}
