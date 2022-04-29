#include <stdio.h>

int main(void) {
    char szName[32] = {0};
    int nAge = 0;

    // 사용자로부터 정수를 입력받음.
    // 이때, 입력의 완료를 의미하는 <Enter> 키(\n) 입력이 buffer에 남음.
    printf("나이를 입력하세요: ");
    scanf("%d%*c", &nAge);

    printf("이름을 입력하세요: ");
    // gets(szName);
    scanf("%s", szName);

    // 이름과 나이를 출력.
    printf("%d, %s\n", nAge, szName);

    return 0;
}