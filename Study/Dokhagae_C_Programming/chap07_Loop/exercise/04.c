#include <stdio.h>

int main(void) {
    int nInput;

    // INPUT:
    //     printf("Input number: ");
    //     scanf("%d", &nInput);

    //     if (nInput < 0 || nInput > 10)
    //         goto INPUT;

    do {
        printf("Input number: ");
        scanf("%d", &nInput);
    } while (nInput < 0 || nInput > 10);

    puts("End");

    return 0;
}