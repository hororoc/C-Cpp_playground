#include <stdio.h>

int GetLength(char* text) {
	int i = 0;

	while (text[i] != '\0')
		++i;
	
	return i;
}

int main(int argc, char* argv[]) {
	char text[11] = { 0 };

	printf("�����ڿ��� �Է��ϼ���(10���� ����): ");
	gets_s(text, 11);

	printf("Text Length: %d\n", GetLength(text));

	return 0;
}