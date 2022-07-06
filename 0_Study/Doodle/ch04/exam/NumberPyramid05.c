#include <stdio.h>

int main() {
    int n = 0;

    printf("자연수 입력: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i * 2 - 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}