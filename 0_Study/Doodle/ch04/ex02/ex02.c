#include <stdio.h>

int main()
{
    int n;

    printf("숫자 입력: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("n은 짝수입니다.\n");
    }
    if (n % 2 == 1)
    {
        printf("n은 홀수입니다.\n");
    }
}