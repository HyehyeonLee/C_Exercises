#include <stdio.h>
// ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ�, �� ������ �����Ͽ� �� ���̿� �����ϴ� �������� ���� ����ؼ�
// ����ϴ� ���α׷��� �ۼ��غ���. ���� �� 3�� 5�� �ԷµǸ�, 3+4+5�� ����� ��µǾ�� �Ѵ�.

int main(void) {
	int num1, num2;
	int sum = 0;

	printf("���� �ΰ� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	for (num1; num1 <= num2; num1++) {
		sum += num1;
	}

	printf("%d", sum);
}