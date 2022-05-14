#include <stdio.h>

int main(void) {
    int nResult;

    nResult += 10;
    nResult += 10;
    nResult += 10;

    printf("%d\n", nResult); // Garbage Value!

    return 0;
}