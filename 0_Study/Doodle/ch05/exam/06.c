#include <stdio.h>

int main() {
    int arr[3][3] = {0};

    printf("%p\n", &arr[0][0]);  // 100
    printf("%p\n", arr[0] + 1);  // 104
    printf("%p\n", &arr[0] + 1); // 112
    printf("%p\n", arr + 1);     // 104
    printf("%p\n", &arr + 1);    // 112
}