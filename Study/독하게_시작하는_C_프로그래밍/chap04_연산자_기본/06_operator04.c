#include <stdio.h>

int main(void) {
    int x = 0;
    scanf("%d", &x);

    // int / int는 int이므로 소수점 이하는 버려지고 출력됨.
    printf("몫: %d\n", x / 3);

    // 몫은 버리고 나머지(int)만 출력됨.
    printf("나머지: %d\n", x % 3);

    return 0;
}