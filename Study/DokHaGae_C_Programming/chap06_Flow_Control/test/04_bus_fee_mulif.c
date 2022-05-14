#include <stdio.h>

int main(void) {
    int age = 0;
    int fee = 1000;

    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    if (age <= 3)
        fee = 0;
    else if (age <= 13)
        fee *= 0.5;
    else if (age <= 19)
        fee *= 0.75;
    else if (age >= 65)
        fee = 0;

    printf("최종 요금: %d원\n", fee);

    return 0;
}
