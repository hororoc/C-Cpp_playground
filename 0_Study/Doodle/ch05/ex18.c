#include <stdio.h>

int main() {
    int a = 10;
    int *ptr_a;
    ptr_a = &a;

    printf("a의 값: %d\n", a);
    printf("a의 주솟값: %p\n", &a);
    printf("ptr_a의 값: %p\n", ptr_a);

    return 0;
}