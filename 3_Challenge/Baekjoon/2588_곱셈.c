#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    int cal1 = 0;
    int cal2 = 0;
    int cal3 = 0;

    scanf("%d %d", &num1, &num2);

    cal1 = num1 * (num2 % 10);
    cal2 = num1 * ((num2 % 100) / 10);
    cal3 = num1 * (num2 / 100);

    printf("%d\n", cal1);
    printf("%d\n", cal2);
    printf("%d\n", cal3);
    printf("%d\n", cal1 + (cal2 * 10) + (cal3 * 100));

    return 0;
}