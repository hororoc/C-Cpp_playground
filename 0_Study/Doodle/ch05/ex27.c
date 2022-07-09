#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;

    printf("&arr[3]의 값: %p\n", &arr[3]);
    printf("arr + 3의 값: %p\n", arr + 3);
    printf("ptr + 3의 값: %p\n", ptr + 3);
    printf("&ptr[3]의 값: %p\n", &ptr[3]);

    printf("arr[3]의 값: \t%d\n", arr[3]);
    printf("*(arr + 3)의 값: %d\n", *(arr + 3));
    printf("*(ptr + 3)의 값: %d\n", *(ptr + 3));
    printf("ptr[3]의 값: \t%d\n", ptr[3]);

    return 0;
}