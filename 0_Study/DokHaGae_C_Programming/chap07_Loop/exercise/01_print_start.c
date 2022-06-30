#include <stdio.h>

int main(void) {
    int nCount = 0;
    int i = 1;
    char ch = 0;

    printf("출력할 별의 개수를 입력하세요(1~9): ");
    scanf("%d", &nCount);

    if (nCount < 1)
        nCount = 1;
    if (nCount > 9)
        nCount = 9;

    while (i <= nCount) {
        printf("*");
        i += 1;
    }

    printf("\n");

    return 0;
}