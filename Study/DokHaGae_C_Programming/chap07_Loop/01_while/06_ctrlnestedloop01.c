#include <stdio.h>

int main(void) {
    int i = 0, j = 0;

    i = 2;               // 계수기 변수 i 초기화
    while (i <= 9) {     // 반복 조건
        j = 1;           // 계수기 변수 j 초기화
        while (j <= 9) { // 반복 조건
            printf("%d * %d = %d\n", i, j, i * j);

            ++j; // 계수기를 증가시킴.
                 // 따라서 언젠가는 반복이 끝나는 조건에 도달함.
        }

        putchar('\n');
        ++i; // 계수기 증가
    }

    return 0;
}