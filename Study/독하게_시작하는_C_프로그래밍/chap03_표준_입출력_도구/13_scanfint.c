#include <stdio.h>

int main(void) {
    int nAge = 0;

    printf("나이를 입력하세요.: ");
    // 사용자가 입력한 정보를 int 형식으로 해석하고 nAge 변수에 저장함.
    // 그리고 & 기호는 주소 연산자이며 &nAge는 nAge 변수의 주소라는 의미.
    scanf("%d", &nAge);

    printf("당신의 나이는 %d세 입니다.\n", nAge);

    return 0;
}