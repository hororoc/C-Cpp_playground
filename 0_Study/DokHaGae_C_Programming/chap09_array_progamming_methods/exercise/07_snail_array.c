#include <stdio.h>

int main(void) {
    int aList[5][5] = {0};
    int x = -1, y = 0, nCounter = 0;
    int i = 0, j = 0;
    int nLength = 9; // 채워지는 요소의 개수
    int nDirection = 1;

    for (nLength = 9; nLength > 0; nLength -= 2) {
        for (i = 0; i < nLength; i++) {
            if (i < nLength / 2 + 1) {
                x += nDirection;
            } else {
                y += nDirection;
            }

            aList[y][x] = ++nCounter;
        }

        nDirection = -nDirection;
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", aList[i][j]);
        }
        putchar('\n');
    }

    return 0;
}