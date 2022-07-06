#include <stdio.h>

int main() {
    int score = 0;

    while (1) {
        printf("점수 입력: ");
        scanf("%d", &score);

        if (score < 0 || score > 100)
            printf("잘못 입력하셨습니다.\n");
        else
            break;
    }

    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }
}