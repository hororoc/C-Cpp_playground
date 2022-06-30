#include <stdio.h>

void GetFourNumbers(int *, int);
int GetMin(int *, int);

int main(void)
{
    int aList[4] = {0};

    GetFourNumbers(aList, 4);

    printf("MIN: %d\n", GetMin(aList, 4));

    return 0;
}

void GetFourNumbers(int *pList, int nSize)
{
    int i = 0;

    for (i = 0; i < nSize; i++)
    {
        printf("정수를 입력하세요(%d/4): ", i + 1);
        scanf("%d", &pList[i]);
    }
}

int GetMin(int *pList, int nSize)
{
    int nMin = 0, i = 0;

    nMin = pList[0];
    for (i = 1; i < nSize; i++)
        if (nMin > pList[i]) nMin = pList[i];

    return nMin;
}