#include <stdio.h>

int main(void) {
    int input, max;

    scanf("%d", &input);
    max = input;

    scanf("%d", &input);
    if (max < input)
        max = input;

    scanf("%d", &input);
    if (max < input)
        max = input;

    printf("MAX: %d\n", max);

    return 0;
}