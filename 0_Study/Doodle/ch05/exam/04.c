#include <stdio.h>

int main() {
    int arr[10][10];

    int x = 0;
    int y = 0;

    scanf("%d %d", &x, &y);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < x; i++) {
        int rowSum = 0;
        for (int j = 0; j < y; j++) {
            rowSum += arr[i][j];
        }
        printf("%d\n", rowSum);
    }

    return 0;
}