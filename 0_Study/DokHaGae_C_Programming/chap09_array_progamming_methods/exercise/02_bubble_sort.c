#include <stdio.h>

int main(void) {
    int aList[5] = {30, 40, 10, 50, 20};
    int i = 0, j = 0, nTmp = 0;

    // YOUR CODE START

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (aList[j] > aList[j + 1]) {
                nTmp = aList[j];
                aList[j] = aList[j + 1];
                aList[j + 1] = nTmp;
            }
        }
    }

    // YOUR CODE END

    for (i = 0; i < 5; i++) {
        printf("%d\t", aList[i]);
    }
    putchar('\n');

    return 0;
}