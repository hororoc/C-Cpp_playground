#include <stdio.h>

int main(void) {
    int aList[5] = {0};
    int i = 0;
    int nMax = 0, nMin = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &aList[i]);

        if (i == 0) {
            nMax = nMin = aList[i];
        }
    }

    for (i = 1; i < 5; i++) {
        if (nMax < aList[i]) {
            nMax = aList[i];
        }

        if (nMin > aList[i]) {
            nMin = aList[i];
        }
    }

    printf("MIN: %d, MAX: %d\n", nMin, nMax);

    return 0;
}