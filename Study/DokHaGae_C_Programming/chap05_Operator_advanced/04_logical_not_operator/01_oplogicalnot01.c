#include <stdio.h>

int main(void) {
    int nInput = 0, bResult = 0;

    scanf("%d", &nInput);
    // 사용자가 입력한 값이 0이 아니면 참.
    // 그러므로 사용자가 0을 입력하면 거짓이나, ! 연산을 구행해 참이됨.
    bResult = !nInput;

    printf("Result : %d (1: True, 0: False)\n", bResult);

    return 0;
}