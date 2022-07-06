#include <stdio.h>

int main() {
    int n;

    printf("자연수 입력: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 4; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}