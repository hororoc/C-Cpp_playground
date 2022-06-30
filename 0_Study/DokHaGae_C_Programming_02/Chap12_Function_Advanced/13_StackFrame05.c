#include <stdio.h>

int Add(int a, int b) {
	int nResult = 0;
	nResult = a + b;
	
	return nResult;
}

int main(int agrc, char* argv[]) {
	int nResult = 0;
	nResult = Add(3, 4);

	return 0;
}