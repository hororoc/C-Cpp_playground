#include <stdio.h>

int main(void) {
    int time;
    int hour, minute, second;

    scanf("%d", &time);

    hour = time / 60 / 60;
    minute = time / 60 % 60;
    second = time % 60;

    printf("%d초는 %02d시간 %02d분 %02d초 입니다.", time, hour, minute, second);

    return 0;
}