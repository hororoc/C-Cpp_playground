#include <stdio.h>

int fact(int n) {
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}

int main() {
    int n = 0;

    printf("정수 입력: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, fact(n));

    return 0;
}