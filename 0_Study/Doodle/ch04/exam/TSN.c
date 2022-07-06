#include <stdio.h>

int main() {
    int n = 0;

    printf("자연수 입력: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int firstPlace = i % 10;

        // if (firstPlace != 0 && firstPlace % 3 == 0)
        if (firstPlace == 3 || firstPlace == 6 || firstPlace == 9)
            printf("* ");
        else
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}