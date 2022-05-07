#include <stdio.h>

int main(void) {
    int input = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &input);

    printf("5로 나눈 나머지는: %d\n", input % 5);

    return 0;
}