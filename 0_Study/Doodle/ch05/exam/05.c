#include <stdio.h>

int main() {
    int arr[3][3] = {0};

    printf("%p\n", &arr); // 100
    printf("%p\n", arr);  // 100
    printf("%p\n", *arr); // 100

    printf("%p\n", &arr[0]); // 100
    printf("%p\n", arr[0]);  // 100
    printf("%d\n", *arr[0]); // 0

    printf("%p\n", &arr[0][0]); // 100
    printf("%d\n", arr[0][0]);  // 0

    return 0;
}