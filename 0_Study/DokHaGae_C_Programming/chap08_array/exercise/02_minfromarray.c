#include <stdio.h>

int main(void) {
    int aList[5] = {30, 40, 10, 50, 20};
    int i = 0;
    int nTmp = 0;

    // YOUR CODE START

    for (i = 1; i < 5; i++) {
        if (aList[0] > aList[i]) {
            nTmp = aList[0];
            aList[0] = aList[i];
            aList[i] = nTmp;
        }
    }

    // YOUR CODE END

    for (i = 0; i < 5; i++) {
        printf("%d\t", aList[i]);
    }
    putchar('\n');

    printf("MIN: %d\n", aList[0]);

    return 0;
}