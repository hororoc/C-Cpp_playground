#include <stdio.h>

int main(void) {
    int nMax = 0;
    int a, b, c;

    // YOUR CODE START
    scanf("%d %d %d", &a, &b, &c);

    nMax = a > b ? (a > c ? a : c) : (b > c ? b : c);

    // YOUR CODE END

    printf("MAX: %d\n", nMax);

    return 0;
}