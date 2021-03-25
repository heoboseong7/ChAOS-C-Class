#include <stdio.h>

int main()
{
    int start_h, start_m, end_h, end_m;
    printf("강의 시간을 입력해 주세요 : ");
    // hh:mm ~ hh:mm
    scanf("%d:%d ~ %d:%d", &start_h, &start_m, &end_h, &end_m);
    printf("입력받은 강의 시간은\n");
    printf("%02d시 %02d분 부터 %02d시 %02d분 까지입니다.\n", start_h, start_m, end_h, end_m);

    return 0;
}
