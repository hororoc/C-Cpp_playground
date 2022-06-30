#include <stdio.h>

int main(void) {
    char ch[100] = {0};
    int nCounter = 0;

    scanf("%s", ch);

    for (int i = 0; i < 100; i++) {
        if (ch[i] == '\0') {
            break;
        } else {
            nCounter++;
        }
    }

    printf("한글 문자의 개수는 %d자입니다.\n", nCounter / 3);

    return 0;
}