#include <stdio.h>

int main()
{
    int a = 30;
    printf("기본 %%d : %d\n", a);
    printf("%%6d : %6d\n", a);       // 출력 폭을 6으로 지정
    printf("%%06d : %06d\n", a);     // 빈 공간을 0으로 채우기
    printf("%%+06d : %+06d\n\n", a); // 기호를 표시
    // +를 적지 않으면 음수인 경우에만 - 기호가 붙음
    printf("%%o : %o\n", a);     // a를 8진수로 출력
    printf("%%x : %x\n", a);     // a를 16진수로 출력
    printf("%%#o : %#o\n", a);   // 8진수 표기 - 앞에 0
    printf("%%#x : %#x\n", a);   // 16진수 표기 - 앞에 0x
    printf("%%#X : %#X\n\n", a); // 대문자 표기

    float pi = 3.14;
    printf("기본 %%f : %f\n", pi);
    printf("%%10f : %10f\n", pi); // 출력 폭을 10으로 지정
    // 실수는 소수점과 e+까지 출력 폭에 포함
    printf("%%10.2f : %10.2f\n", pi);
    printf("%%10.2e : %10.2e\n\n", pi);

    char c = 'A';
    printf("%%010c : %010c\n", c);
    printf("%%20s : %20s\n", "Hello World!");  // 문자열 출력
    printf("%%-20s : %-20s\n", "Hello World"); // 왼쪽 정렬
    return 0;
}