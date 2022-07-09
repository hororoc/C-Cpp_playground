#include <stdio.h>

int main() {
    int arr[10];

    printf("%p\n", &arr);
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);

    return 0;
}