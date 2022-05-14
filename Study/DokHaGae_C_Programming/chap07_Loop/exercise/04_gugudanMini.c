#include <stdio.h>

int main(void) {
    int nInput = 0;
    int i = 1;

    printf("정수를 입력하세요(0~9): ");
    scanf("%d", &nInput);

    if (nInput < 2 || nInput > 9) {
        printf("ERROR\n");
    } else {
        while (i < 10) {
            printf("%d * %d = %d\n", nInput, i, nInput * i);

            ++i;
        }
    }

    return 0;
}