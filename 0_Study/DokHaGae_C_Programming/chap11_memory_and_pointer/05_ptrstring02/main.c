#include <stdio.h>

int main(void) {
    char szBuffer[16] = {"Hello"};
    char *pszData = szBuffer;
    int nLength = 0;
    
    // 문자열의 길이를 측정하기 위해 NULL 문자가 저장된 위치를 찾아낸다.
    while (*pszData != '\0') {
        pszData += sizeof(char);
    }
    
    // NULL 문자가 저장된 위치(주소)에서 시작 위치(주소)를 빼면
    // 문자열의 길이를 알 수 있다.
    nLength = (int)((pszData - szBuffer) / sizeof(char));
    printf("Length: %d\n", nLength);
    
    return 0;
}
