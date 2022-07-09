#include <stdio.h>

int main() {
    int arr[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    printf("%p\n", arr);
    for (int i = 3; i < 7; i++) {
        printf("%p %d\n", arr + i, *(arr + i));
    }

    // 112 1
    // 116 5
    // 120 9
    // 124 2

    return 0;
}