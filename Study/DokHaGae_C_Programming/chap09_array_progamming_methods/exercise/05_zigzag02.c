#include <stdio.h>

int main(void) {
    int aList[5][5] = {0};
    int i = 0, j = 0, nCounter = 0, nOffset = 1;

    for (i = 0; i < 5; i++) {
        // 첫 번째 요소의 초깃값을 결정
        if (i % 2 == 0) {
            nCounter = i * 5;
        } else {
            nCounter = (i + 1) * 5 + 1;
        }

        for (j = 0; j < 5; j++) {
            // nOffset이 양수면 nCounter는 증가하고
            // 음수면 반대로 감소함.
            nCounter += nOffset;
            aList[i][j] = nCounter;
        }
        // 토글 스위치처럼 행마다 양수/음수로 변경됨.
        nOffset = -nOffset;
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", aList[i][j]);
        }
        putchar('\n');
    }

    return 0;
}