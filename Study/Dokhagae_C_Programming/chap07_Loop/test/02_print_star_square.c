#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 0;

    while (i < 5) {
        j = 0;

        while (j < 5) {
            printf("*\t");

            ++j;
        }
        putchar('\n');

        ++i;
    }

    return 0;
}