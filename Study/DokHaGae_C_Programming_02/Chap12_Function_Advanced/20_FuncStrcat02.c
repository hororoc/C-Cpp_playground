#include <stdio.h>
#include <string.h>

int main(void) {
	char szPath[128] = { "C:\\Program Files\\" };

	strcat(szPath, "CHS\\");
	strcat(szPath, "C Programming");
	puts(szPath);

	strcpy(szPath, "C:\\Program Files\\");
	strcat(szPath + strlen("C:\\Program Files\\"), "CHS\\");
	strcat(szPath + strlen("C:\\Program Files\\CHS\\"), "C Programming");
	puts(szPath);

	return 0;
}