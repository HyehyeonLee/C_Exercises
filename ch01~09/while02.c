#include <stdio.h>
// ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� ���� ����, �� ����ŭ 3�� ����� ����ϴ� ���α׷��� �ۼ��غ���.
// ������ 5�� �Է� �޾Ҵٸ�, 3 6 9 12 15�� ����ؾ� �Ѵ�.

int main(void) {
	int num1 = 3, num2 = 1;
	int input;

	scanf_s("%d", &input);

	while (input > 0) {
		printf("%d ", num1 * num2);
		num2++;
		input--;
	}

	return 0;
}