#include <stdio.h>

int main(void) {
    char szBuffer[32] = {0};

    // 상수에 대입 연산을 수행할 수 없음.
    3 = 4; // ERROR

    // 배열의 이름은 '주소상수'임. 변수가 아님!
    szBuffer = 'A'; // ERROR

    return 0;
}