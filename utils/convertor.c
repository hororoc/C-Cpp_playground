#include <stdio.h>

int main(void) {
    int num;

    printf("input integer: ");
    scanf("%d", &num);

    printf("Decimal: %d\n", num);
    // printf("Binary: %b\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %x", num);
}