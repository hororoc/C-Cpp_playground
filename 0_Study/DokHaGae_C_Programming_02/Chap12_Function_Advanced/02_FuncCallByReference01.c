#include <stdio.h>

// �Ű������� int* �� �Լ��� ���� �� ����
int Add(int* a, int* b) {
	return *a + *b;
}


int main(void) {
	int x = 3, y = 4;

	printf("Call By Reference\n");

	// Add() �Լ��� ȣ���� �� ���������� �ּҸ� ���μ��� ���
	printf("%d\n", Add(&x, &y));

	return 0;
}