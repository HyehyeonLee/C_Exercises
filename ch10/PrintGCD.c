#include <stdio.h>
// �� ���� ������ �Է� �޾Ƽ� �ִ� ������� ���ϴ� ���α׷��� �ۼ��غ���.

int printGCD(int num1, int num2) {
	int a, b, rem;
	if (num1 > num2) {
		a = num1;
		b = num2;
	}
	else {
		a = num2;
		b = num1;

	}

	while (1) { //��Ŭ���� ȣ����
		rem = a % b;
		a = b;
		b = rem;
		if (b == 0) break;
		}

	return a;
}

int main(void) {
	int num1, num2;

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);
	printf("�� ���� �ִ� ����� : %d", printGCD(num1, num2));

	return 0;
}