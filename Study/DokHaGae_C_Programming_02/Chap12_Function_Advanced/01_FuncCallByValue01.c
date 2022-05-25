#include <stdio.h>

int Add(int a, int b) {
	return a + b;
}

int main(int argc, char* argv[]) {
	printf("Call By Value\n");

	printf("%d\n", Add(3, 4));
 
	return 0;
}