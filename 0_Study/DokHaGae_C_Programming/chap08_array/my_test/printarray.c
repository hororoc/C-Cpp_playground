#include <stdio.h>

int main(void) {
    int aList[5] = {0};

    // 배열 이름 = 주소상수
    printf("%%d: %d\n", aList);
    printf("%%p: %p\n", aList);

    return 0;
}