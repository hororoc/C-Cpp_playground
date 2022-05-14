#include <stdio.h>

int main(void) {
    char ch = 0;

    do {
        // 조건을 나중에 비교하므로
        // 일단 한 번은 무조건 실행함.
        ch = getchar();
        putchar(ch);
    } while (ch != '\n'); // 조건식 오른쪽 끝에 ;이 있다는 점에 주의.

    return 0;
}