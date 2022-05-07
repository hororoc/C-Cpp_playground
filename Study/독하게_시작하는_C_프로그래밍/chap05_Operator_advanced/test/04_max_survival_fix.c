#include <stdio.h>

int main(void) {
    int nMax, nInput = 0;

    scanf("%d", &nInput);
    nMax = nInput;
    nMax = nInput > nMax ? nInput : nMax;

    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    printf("MAX: %d\n", nMax);

    return 0;
}