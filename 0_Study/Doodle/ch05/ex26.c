#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("arr의 값: %p\n", arr);
    printf("&arr[0]의 값: %p\n", &arr[0]);

    return 0;
}