#include <stdio.h>

int main(void) {
    int nMax = 0, nInput = 0;

    // 처음 입력받은 값은 일단 최댓값
    scanf("%d", &nInput);
    nMax = nInput;

    // 현재까지 확인한 최댓값과 사용자가 입력한 값을 비교하고
    // 새로운 최댓값을 결정.
    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    // 같은 논리를 게속 거듭해 최종 최댓값을 결정.
    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    printf("MAX: %d\n", nMax);

    return 0;
}