#include <stdio.h>
#include <string.h>

int main(void) {
	char szPath[128] = { "C:\\Program Files\\" };
	char szBuffer[128] = { 0 };

	printf("Input path: ");
	gets_s(szBuffer, sizeof(char) * 128);

	strcat_s(szPath, sizeof(char) * 128, szBuffer);
	puts(szPath);

	return 0;
}
