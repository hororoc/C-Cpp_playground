#include <stdio.h>

int main(void) {
    char text[32] = {0};

    printf("입력: ");
    scanf("%s%*c", text);

    printf("출력: %c\n", text[1]);

    return 0;
}