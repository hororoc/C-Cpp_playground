#include <stdio.h>

int main(void) {
    int num1, num2;
    float avg;

    printf("두 정수를 입력하세요.: ");
    scanf("%d %d", &num1, &num2);

    avg = (num1 + num2) / 2.0;

    printf("AVG: %.2f\n", avg);

    return 0;
}