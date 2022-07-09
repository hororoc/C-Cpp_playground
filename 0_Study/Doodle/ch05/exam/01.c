#include <stdio.h>

int main() {
    int n = 0;
    int number[100] = {0};

    printf("숫자의 개수 입력: ");
    scanf("%d", &n);

    printf("숫자 입력: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 1)
            printf("%d ", number[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}