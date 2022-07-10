#include <stdio.h>

void swap(int x, int y) {
    int tmp = x;
    x = y;
    y = tmp;

    return;
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    swap(a, b);

    printf("a=%d b=%d\n", a, b);

    return 0;
}