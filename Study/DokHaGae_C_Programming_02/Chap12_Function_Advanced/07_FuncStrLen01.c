#include <stdio.h>

// �Ű������� ���޵� ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�
int GetLength(const char* pszParam) {
	int nLength = 0;

	while (pszParam[nLength] != '\0') {
		nLength += 1;
	}

	return nLength;
}

int main(int agrc, char* argv[]) {
	char* pszData = "Hello";

	printf("%d\n", GetLength("Hi"));
	printf("%d\n", GetLength(pszData));

	return 0;
}