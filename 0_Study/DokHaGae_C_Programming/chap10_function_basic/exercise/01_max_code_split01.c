#include <stdio.h>

int main(void)
{
    int aList[3] = {0};
    int nMax = -9999, i = 0;

    // 입력
    for (i = 0; i < 3; i++)
    {
        printf("정수를 입력하세요: ");
        scanf("%d", &aList[i]);
    }

    // 최댓값 계산
    nMax = aList[0];
    for (i = 1; i < 3; i++)
        if (aList[i] > nMax)
            nMax = aList[i];

    // 출력
    printf("%d, %d, %d 중 가장 큰 수는 %d입니다.\n", aList[0], aList[1], aList[2], nMax);

    return 0;
}