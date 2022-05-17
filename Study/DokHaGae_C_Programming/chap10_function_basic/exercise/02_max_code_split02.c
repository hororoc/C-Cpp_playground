#include <stdio.h>

int GetData()
{
    int nInput = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &nInput);

    return nInput;
}

int GetMax(int num1, int num2, int num3)
{
    int nMax = num1;

    if (num2 > nMax)
        nMax = num2;

    if (num3 > nMax)
        nMax = num3;

    return nMax;
}

void PrintData(int num1, int num2, int num3, int nMax)
{
    printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.\n", num1, num2, num3, nMax);

    // return
}

int main(void)
{
    int aList[3] = {0};
    int nMax = -9999, i = 0;

    // 입력
    for (i = 0; i < 3; i++)
        aList[i] = GetData();

    // 최댓값 계산
    nMax = GetMax(aList[0], aList[1], aList[2]);

    // 출력
    PrintData(aList[0], aList[1], aList[2], nMax);

    return 0;
}