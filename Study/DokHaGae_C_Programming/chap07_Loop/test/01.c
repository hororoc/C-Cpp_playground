#include <stdio.h>

int main(void) {
    int i = 0;
    int counter = 0;
    int sum = 0;

    for (i = 1; i <= 100; i++) {
        if (i % 4 == 0) {
            counter++;
            sum += i;
        }
    }

    printf("COUNTER: %d\n", counter);
    printf("SUM: %d\n", sum);

    return 0;
}