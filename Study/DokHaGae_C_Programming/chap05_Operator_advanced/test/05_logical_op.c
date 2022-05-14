#include <stdio.h>

int main(void) {
    int nResult, w = 0, x = -1, y = -1, z = 1;
    nResult = w++ || x++ && ++y || ++z;
    // 0 || -1 && 0 || 2

    printf("%d %d %d %d %d\n", w, x, y, z, nResult);
    // 1 0 0 2 1

    return 0;
}