#include <stdio.h>

int main(void) {
    int x = 5, y = 10;

    printf("%d\n", x == y);
    printf("%d\n", x != y);
    printf("%d\n", x > 5);
    printf("%d\n", y < 5);

    // 10은 10보다 크거나 같기 때문에 '참'임.
    printf("%d\n", y >= 10);
    // 산술연산은 관계연산보다 우선함.
    // 그러므로 x + 5 연산 결과가 관계연산에 참여함.
    printf("%d\n", y <= x + 5);

    return 0;
}