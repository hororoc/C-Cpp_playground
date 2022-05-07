#include <stdio.h>

int main(void) {
    int nInput, nTotal;

    // Input here your code
    scanf("%d", &nInput);
    nTotal = nInput;
    scanf("%d", &nInput);
    nTotal += nInput;
    scanf("%d", &nInput);
    nTotal += nInput;

    printf("Total: %d\n", nTotal);

    return 0;
}