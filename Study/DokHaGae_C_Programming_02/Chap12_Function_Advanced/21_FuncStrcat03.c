#include <stdio.h>
#include <string.h>

int main(void) {
	char szPath[128] = { "C:\\Programming Files\\" };

	strcat(szPath + 17, "CHS\\");
	strcat(szPath + 17 + 8, "C Programming");

	puts(szPath);

	return 0;
}