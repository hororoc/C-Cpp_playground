#include <stdio.h>

// �迭 ���μ��� '������' �Ű������� �޴´�.
// �����Ϳ��� ����� ���� ������ �����Ƿ� int �Ű������� �� �ʿ��ϴ�.
// ���� �Է¹޾ƾ� �� ������ ������ �޶����� �� �Լ� �ڵ�� ������ �ʴ´�!
void InitList(int* pList, int nSize) {
	int i = 0;

	for (i = 0; i < nSize; i++) {
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &pList[i]);
	}
}

// ��Ұ� int ������ �迭�̶�� ����� ������ ������� ������ �� �ִ�!
void SortList(int* pList, int nSize) {
	int i = 0, j = 0, nTmp = 0;

	for (i = 0; i < nSize - 1; i++) {
		for (j = i + 1; j < nSize; j++) {
			if (pList[i] > pList[j]) {
				nTmp = pList[i];
				pList[i] = pList[j];
				pList[j] = nTmp;
			}
		}
	}
}

void PrintList(int* pList, int nSize) {
	int i = 0;

	for (i = 0; i < nSize; i++) {
		printf("%d\t", pList[i]);
	}
	putchar('\n');
}

int main(void) {
	// �ڷᱸ���� ���������� �����߱� ������
	// �ٸ� �Լ������� ���� ������ �� ����.
	int aList[5] = { 0 };

	InitList(aList, 5);
	SortList(aList, 5);
	PrintList(aList, 5);

	return 0;
}