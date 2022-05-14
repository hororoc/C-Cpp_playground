#include <stdio.h>

int main(void) {
    // int형 상수 10을 10진 (부호가 있는) 정수 형식으로 출력.
    printf("%d\n", 10);

    // 10을 '부호가 없는' 정수 형식으로 출력.
    printf("%u\n", 10);

    // unsigned int형 상우 10U을 %d 형식으로 출력.
    printf("%d\n", 10U);

    // unsigned int형 상수를 %u 형식으로 출력.
    printf("%u\n", 10U);

    // 부호가 있는 32bits 정수로 표현할 수 잇는 가장 큰 수를 출력.
    printf("%d\n", 2147483647);

    // 부호가 있는 32bits 정수로 표현할 수 있는 '범위를 넘어선' 정수를 출력.
    printf("%d\n", 2147483648);

    // 부호가 없는 32bits로 출력하므로 값이 제대로 출력됨.
    printf("%u\n", 2147483649);

    // -1을 부호가 있는 10진수 형식으로 출력.
    printf("%d\n", -1);

    // 같은 값(-1)이지만 부호가 없는 형식으로 출력하면 전혀 다른 값이 됨.
    printf("%u\n", -1);

    return 0;
}