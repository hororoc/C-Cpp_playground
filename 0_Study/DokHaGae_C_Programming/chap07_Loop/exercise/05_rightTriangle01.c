#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}