#include <stdio.h>

int main(void) {
    int x = 0, nResult = 0;

    // x의 값을 1 증가시킨 후 출력함
    ++x;
    printf("%d\n", x);

    // x의 값을 1 증가시킨 후 출력.
    x++;
    printf("%d\n", x);

    // x의 값을 1 증가시킨 후 단순 대입(전위식 표기).
    nResult = ++x;
    printf("%d, %d\n", nResult, x);

    // x의 값을 nResult에 대입한 후 x를 1 감소시킴(후위식 표기).
    nResult = x--;
    printf("%d, %d\n", nResult, x);

    return 0;
}