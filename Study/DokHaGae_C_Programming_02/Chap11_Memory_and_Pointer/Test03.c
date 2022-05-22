#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	// pszData = szBuffer; // shallow copy
	strcpy_s(pszData, 12, szBuffer);
	puts(pszData);

	free(pszData);

	return 0;
}