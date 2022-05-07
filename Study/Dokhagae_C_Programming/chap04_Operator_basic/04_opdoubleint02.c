#include <stdio.h>

int main(void) {
    int x = 10;

    // int * int  -> %d
    printf("%d\n", x * 10);
    // int * double -> %d (출력 불가능)
    printf("%d\n", x * 10.0); // FAIL

    // int / int는 int 형식임. 실수 형식이 아니라는 점에 주의!
    // 단, 소수점 이하는 절사됨.
    printf("%d\n", x / 10);

    // int / int는 int 형식이므로 %f로 출력할 수 없음.
    printf("%d\n", 5 / 2);
    // 소수점 이하가 절사되므로 사실상 정수 2을 %f로 출력하는 것임.
    printf("%f\n", 5 / 2); // FAIL

    // double / int는 double 형식임.
    printf("%f\n", 5.0 / 2);

    return 0;
}