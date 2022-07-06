#include <stdio.h>

int main() {
    int num;

    printf("자연수 입력: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d", i);

            if (i != num)
                printf(", ");
        }
    }
    printf("\n");
}