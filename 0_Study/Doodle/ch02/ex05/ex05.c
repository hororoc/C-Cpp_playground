#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;

    int add = a + b;  // 덧셈
    int sub = a - b;  // 뺄셈
    int mul = a * b;  // 곱셈
    int div = a / b;  // 몫
    int mod = a % b;  // 나머지

    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    printf("%d / %d = %d\n", a, b, div);
    printf("%d %% %d = %d\n", a, b, mod);
}