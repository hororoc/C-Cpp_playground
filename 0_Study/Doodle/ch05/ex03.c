#include <stdio.h>

int main() {
    int arr[5] = {1, 3, 5, 7, 9};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d\n", arr[i]);
    }
}