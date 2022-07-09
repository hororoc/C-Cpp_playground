#include <stdio.h>

int main() {
    int a = 10;
    int *ptr_a = &a;

    printf("ptr_a = %p\n", ptr_a);
    printf("ptr_a + 1 = %p\n", ptr_a + 1);
    printf("ptr_a + 2 = %p\n", ptr_a + 2);

    return 0;
}