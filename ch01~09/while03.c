#include <stdio.h>
// ���α׷� ����ڷκ��� ����ؼ� ������ �Է� �޴´�. �׸��� �� ���� ����ؼ� ���� ������. �̷��� �۾��� ���α׷� ����ڰ� 0�� �Է��� ������ ��ӵǾ�� �ϸ�,
// 0�� �ԷµǸ� �Էµ� ��� ������ ���� ����ϰ� ���α׷��� �����Ų��.

int main(void) {
	int input;
	int sum = 0;

	while (1) {
		scanf_s("%d ", &input);
		sum += input;

		if (input == 0) break;
	}

	printf("%d ", sum);

	return 0;
}