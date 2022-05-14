#include <stdio.h>

int main(void) {
    int nIndex = 0;
    // 값이 음수가 돼야 반복문을 멈출 수 있음.

    while (nIndex >= 0) {
        // 1만큼 증가시켜도 여전히 0보다큰 양수임.
        ++nIndex;
    }

    // int형 양수 최대 크기를 넘어서면 가장 큰 음수가 되고
    // 조건을 만족하지 못하게 됨.
    printf("%d\n", nIndex);

    return 0;
}