#include <stdio.h>

int main(void) {
	// char* [3] �迭�� ������ ���ڿ��� �ʱ�ȭ
	char* astrList[3] = { "Hello", "World", "String" };

	// �迭�� ��Ұ� char* �̹Ƿ� %s�� ����ϴ� ���� �´�.
	printf("%s\n", astrList[0]); // Hello
	printf("%s\n", astrList[1]); // World
	printf("%s\n", astrList[2]); // String

	// �迭�� 0�� ��ҿ��� ù ���ڰ� ����� �޸��� �ּҰ� ����ִ�.
	// ���⿡ ������ ���� '����ּ�'�� ����Ѵ�.
	printf("%s\n", astrList[0] + 1); // ello
	printf("%s\n", astrList[1] + 2); // rld
	printf("%s\n", astrList[2] + 3); // ing

	// char*�� �迭�� �������� char�� 2���� �迭�� ����.
	printf("%c\n", astrList[0][3]); // l
	printf("%c\n", astrList[1][3]); // l
	printf("%c\n", astrList[2][3]); // i

	return 0;
}