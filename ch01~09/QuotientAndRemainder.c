#include <stdio.h>
// �Է� ���� �� ������ �������� �� ��ԵǴ� ��� �������� ����ϴ� ���α׷��� �ۼ��غ���.
// ���� �� 7�� 2�� �ԷµǸ� ������ 3, �������� 1�� ��µǾ�� �Ѵ�.

int main(void) {
	int num1, num2;

	scanf_s("%d %d", &num1, &num2);
	printf("�� : %d, ������ : %d \n", num1 / num2, num1 % num2);

	return 0;
}