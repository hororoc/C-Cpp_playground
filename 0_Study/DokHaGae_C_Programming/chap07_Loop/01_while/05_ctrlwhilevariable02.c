#include <stdio.h>

int main(void) {
    char ch = 0;

    while ((ch = getchar()) != '\n') {
        // nIndex 변수가 생성되고 초화됨.
        int nIndex = 0;
        printf("%02d\t%c\n", nIndex, ch);
        // 변수의 값을 증가시키지만 논리적으로 소용이 없음.
        ++nIndex;

        // 여기서 nIndex는 소멸하고 사라지기 때문.
    }

    return 0;
}