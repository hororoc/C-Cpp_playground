#include <stdio.h>

int main(void) {
    int price = 0;
    int persons = 0;

    printf("가격? -> ");
    scanf("%d", &price);

    printf("몇 명? -> ");
    scanf("%d", &persons);

    printf("1인당 낼 금액 -> %d\n", price / persons);
    printf("잔금 -> %d\n", price % persons);

    return 0;
}