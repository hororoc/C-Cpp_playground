#include <stdio.h>

int main(int argc, char* argv[]) {
	char* astrList[3] = { "Hello", "World", "String" };
	// astrList�� ��� ������ char*�̹Ƿ� char**�� ��´�.
	char** ppStrList = astrList;
	// char** ���� ������ �ּҴ� char***�� ��´�.
	char*** pppStrList = &ppStrList;

	// *(char** + �ε���)�� ������ char*�̴�.
	// ���� %s�� ����ϰų� puts()�� ����Ѵ�.
	puts(ppStrList[0]);
	puts(ppStrList[1]);
	puts(ppStrList[2]);

	// char***�� �� �� ���������ϸ� char*�̴�.
	puts(*pppStrList[0]);
	puts(*(*(pppStrList + 0) + 1));

	return 0;
}