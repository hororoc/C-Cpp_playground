#include <stdio.h>

// 전역 변수 nInput의 선언 및 정의
int nInput = 100;

void TestFunc(void)
{
    // 전역 변수 nInput의 값을 출력
    printf("Testfunc(): %d\n", nInput);
}

int main(void)
{
    // 전역 변수와 다른 지역 변수 nInput 변수 선언 및 정의
    int nInput = 0;
    printf("%d\n", nInput);

    {
        // 전역 변수 및 앞서 선언한 nInput과도 다른 nInput 변수 선언 및 정의
        int nInput = 20;
        printf("%d\n", nInput);
    }

    TestFunc();

    return 0;
}