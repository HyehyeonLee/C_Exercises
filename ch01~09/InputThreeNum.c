#include <stdio.h>
// ���α׷� ����ڷκ��� �� ���� ���� num1, num2, num3�� ������� �Է� ���� �Ŀ�, ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.
// num1*num2+num3
// ��, �Է� ���� �� ���� ������ 2, 4, 6�̶�� ������ ���·� ����� �ؾ� �Ѵ�.
// 2 * 4 + 6 = 14

int main(void) {
	int num1, num2, num3, result;

	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d * %d + %d = %d", num1, num2, num3, result);

	return 0;
}