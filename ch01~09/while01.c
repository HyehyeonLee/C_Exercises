#include <stdio.h>
// ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�, �� ����ŭ "Hello World!"�� ����ϴ� ���α׷��� �ۼ��غ���

int main(void) {
	int num;

	scanf_s("%d", &num);

	while (num > 0) {
		printf("Hello World! \n");
		num--;
	}

	return 0;
}