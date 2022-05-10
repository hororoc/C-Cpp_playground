#include <stdio.h>

int main(void) {
    int i = 0;
    int result = 0;

    while (i <= 10) {
        result += i;
        ++i;
    }

    printf("Total: %d\n", result);

    return 0;
}