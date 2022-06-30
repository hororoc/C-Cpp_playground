#include <stdio.h>

int main(void) {
    // nTmp는 '교환'을 위해 필요한 변수임.
    int x = 10, y = 20, nTmp = 0;
    printf("Before: %d, %d\n", x, y);

    // 두 변수 x와 y에 저장된 값을 서로 교환함.
    nTmp = x;
    x = y;
    y = nTmp;

    // 교환이 완료된 것을 확인하기 위해 출력.
    printf("After: %d, %d\n", x, y);

    return 0;
}