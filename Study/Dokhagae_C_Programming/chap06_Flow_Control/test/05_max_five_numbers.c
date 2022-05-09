#include <stdio.h>

int main(void) {
    int nInput = 0, max = 0;

    printf("정수를 5개를 입력하세요: \n");
    scanf("%d", &nInput); // 1
    max = nInput;

    scanf("%d", &nInput); // 2
    if (nInput > max)
        max = nInput;

    scanf("%d", &nInput); // 3
    if (nInput > max)
        max = nInput;

    scanf("%d", &nInput); // 4
    if (nInput > max)
        max = nInput;

    scanf("%d", &nInput); // 5
    if (nInput > max)
        max = nInput;

    if (max > 100)
        max = 100;
    else if (max < 0)
        max = 0;

    printf("MAX: %d\n", max);

    return 0;
}