#include <stdio.h>

int main(void) {
    int num;

    printf("input integer: ");
    scanf("%d", &num);

    printf("%b", num);
}