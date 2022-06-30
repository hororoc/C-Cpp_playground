#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char szBuffer[12] = {"HelloWorld"};
    char *pszData = NULL;
    
    pszData = (char*)malloc(sizeof(char) * 12);
//    pszData = szBuffer; // PROBLEM 1) Shallow Copy(얕은 복사)
//    memcpy(pszData, szBuffer, sizeof(szBuffer));
    strcpy(pszData, szBuffer);
    puts(pszData);
    
    // 1. szBuffer를 수정하면 pszData도 수정된다(반대도 동일).
    szBuffer[0] = 'T';
    puts(pszData);
    
    // PROBLEM 2) 메모리 해제를 하지 않음.
    free(pszData);
    
    return 0;
}
