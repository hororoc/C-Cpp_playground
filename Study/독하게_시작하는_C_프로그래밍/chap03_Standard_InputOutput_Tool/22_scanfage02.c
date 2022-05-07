#include <stdio.h>

int main(void) {
    char szName[32] = {0};
    int nAge = 0;

    // 사용자로부터 정수를 입력받음.
    // 이때, 입력의 완료를 의미하는 <Enter> 키(\n) 입력이 buffer에 남음.
    printf("나이를 입력하세요: ");
    // scanf("%d", &nAge);
    scanf_s("%d%*c", &nAge);

    printf("이름을 입력하세요: ");
    // buffer 안에 남아있는 것들을 모두 비운 후 이름을 입력 받음.
    // 따라서 개행문자(\n)가 제거됨.
    // fflush(stdin);
    // fpurge(stdin);
    gets(szName);

    // 이름과 나이를 출력.
    printf("%d, %s\n", nAge, szName);

    return 0;
}