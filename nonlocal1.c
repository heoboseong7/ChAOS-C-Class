#include <stdio.h>
#include "nonlocal2.c"

extern int global; // 전역 변수
//static int file_scope = 22222; // 파일범위 변수
extern void ff();

int main()
{
    printf("\"global\" in nonlocal1 %d\n", global);
    ff();
    return 0;
}
