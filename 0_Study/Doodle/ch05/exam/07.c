#include <stdio.h>

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    int(*ptr)[4] = arr;
    // (*ptr)[4] == &arr[0][0]
    // *ptr == &arr[0]
    // *ptr == arr

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            // printf("%d ", *ptr[i][j]);
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    return 0;
}