#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("�� ���� �Է��ϼ���!");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2) {
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}
	else {
		printf("%d - %d = %d", num2, num1, num2 - num1);
	}
}