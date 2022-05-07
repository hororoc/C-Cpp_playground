#include <stdio.h>

int main(void) {
    int height = 0;

    printf("키를 입력하세요: ");
    scanf("%d", &height);

    // height >= 150 ? printf("결과: 합격"); : printf("결과: 불합격"); // ERROR
    // height >= 150 ? (result = "합격") : (result = "불합격");
    // result = height >= 150 ? "합격" : "불합격";

    printf("결과: %s\n", height >= 150 ? "합격" : "불합격");

    return 0;
}