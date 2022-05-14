#include <stdio.h>

int main(void) {
    int age;
    int fee = 1000;

    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    if (age < 20)
        fee *= 0.75;

    printf("최종 요금: %d원\n", fee);

    return 0;
}