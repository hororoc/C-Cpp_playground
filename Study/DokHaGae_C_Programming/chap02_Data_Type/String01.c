#include <stdio.h>

int main(void) {
    char ch1 = 'A', ch2 = 'B', ch3 = 'C';
    char szData[4] = {'A', 'B', 'C'};
    char szNewData[4] = {"ABC"};

    printf("1) ");
    for (int i = 0; i < sizeof(szData) / sizeof(char); i++) {
        printf("%d    ", szData[i]);
    }

    printf("\n");

    printf("2) ");
    for (int i = 0; i < sizeof(szNewData) / sizeof(char); i++) {
        printf("%d    ", szNewData[i]);
    }

    return 0;
}