#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);
    if (a < 1 || b > 10000) return 0;

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    return 0;
}