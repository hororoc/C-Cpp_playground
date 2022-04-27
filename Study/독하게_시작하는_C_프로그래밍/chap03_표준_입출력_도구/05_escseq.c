#include <stdio.h>

int main(void) {
    int x = 10;

    // 문자 상수를 화면에 출력함.
    putchar('B');

    // '\n'은 개행문자이므로 알파벳 문자가 화면에 보이는 것이 아님.
    putchar('\n');

    // 앞서 개행문자가 출력되었으므로 A는 다음 행에 출력됨.
    printf("%c\n", 'A');

    // %d라는 형식 문자에 맞춰 변수 x에 담긴 정보를 출력.
    printf("x는 %d 입니다.\n", x);

    return 0;
}