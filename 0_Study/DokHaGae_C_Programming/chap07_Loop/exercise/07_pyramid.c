#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 + i; j++) {
            if (i + j >= 4) {
                printf("*\t");
            } else {
                printf(" \t");
            }
        }
        printf("\n");
    }

    return 0;
}