#include <stdio.h>

int main() {
    int a = 10;

    printf("&a = %p\n", &a);
    printf("(&a) + 1 = %p\n", (&a) + 1);
    printf("(&a) + 2 = %p\n", (&a) + 2);

    return 0;
}