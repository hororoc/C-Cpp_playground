#include <stdio.h>

void printArr(int parr[4]) { printf("parr의 값: %p\n", parr); }

int main() {
    int arr[4] = {1, 2, 3, 4};

    printf("arr의 값: %p\n", arr);
    printArr(arr);
}