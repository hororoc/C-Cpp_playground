#include <stdio.h>

int main(int argc, char* argv[]) {
	char* astrList[3] = { "Hello", "World", "String" };
	// astrList의 요소 형식이 char*이므로 char**에 담는다.
	char** ppStrList = astrList;
	// char** 형식 변수의 주소는 char***에 담는다.
	char*** pppStrList = &ppStrList;

	// *(char** + 인덱스)의 형식은 char*이다.
	// 따라서 %s로 출력하거나 puts()로 출력한다.
	puts(ppStrList[0]);
	puts(ppStrList[1]);
	puts(ppStrList[2]);

	// char***를 두 번 간접지정하면 char*이다.
	puts(*pppStrList[0]);
	puts(*(*(pppStrList + 0) + 1));

	return 0;
}