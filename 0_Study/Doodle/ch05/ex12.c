#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "hello";
    int len = strlen(s);

    printf("배열의 칸수: %lu\n", sizeof(s) / sizeof(s[0]));
    printf("문자열의 길이: %d\n", len);

    return 0;
}