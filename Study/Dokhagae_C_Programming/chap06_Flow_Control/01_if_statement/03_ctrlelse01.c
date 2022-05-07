#include <stdio.h>

int main(void) {
    int nInput = 0, nSelect = 0;

    scanf("%d", &nInput);

    // nSelect = nInput <= 10 ? 10 : 20;
    // Ternary operator를 이용한 것과 동일한 구조의 if else 문.
    if (nInput <= 10)
        nSelect = 10;
    else
        nSelect = 20;

    printf("%d\n", nSelect);

    return 0;
}