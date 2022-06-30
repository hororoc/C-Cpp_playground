#include <stdio.h>

int main(void) {
    // 부호가 있는 64bits 정수형 변수 선언 및 정의
    long long int lldData = 4294967295LL;

    // 64bits 정보를 32bits 형식 문자로 출력.
    printf("%d\n", lldData);
    printf("%u\n", lldData);

    // 32bits로는 표현할 수 없는 범위의 정보를 출력.
    // 제대로 된 결과를 기대할 수 없음!
    printf("%u\n", lldData + 1);
    printf("%u\n", lldData + 2);
    printf("%u\n", lldData + 3);

    // 64bits 정보를 64bits 형식 문자(%lld)로 출력.
    printf("%lld\n", lldData + 1);
    printf("%lld\n", lldData + 2);
    printf("%lld\n", lldData + 3);

    return 0;
}