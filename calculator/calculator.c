#include <stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;

	int sum = 0;
	int minus = 0;
    int multiply = 0;
    float divide = 0.0;

	printf("Input 2 numbers: ");
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;
	minus = num1 - num2;
	multiply = num1 * num2;
	divide = (float)num1 / num2;

	printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d - %d = %d\n", num1, num2, minus);
    printf("%d * %d = %d\n", num1, num2, multiply);
    printf("%d / %d = %f\n", num1, num2, divide);

	return 0;
}