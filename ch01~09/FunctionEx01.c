#include <stdio.h>

int max(int num1, int num2, int num3) {
	int result;
	if (num1 > num2&& num1 > num3) {
		result = num1;
	}
	else if (num2 > num1&& num2 > num3) {
		result = num2;
	}
	else if (num3 > num1&& num3 > num2) {
		result = num3;
	}

	return result;
}

int min(int num1, int num2, int num3) {
	int result;
	if (num1 < num2 && num1 < num3) {
		result = num1;
	}
	else if (num2 < num1 && num2 < num3) {
		result = num2;
	}
	else if (num3 < num1 && num3 < num2) {
		result = num3;
	}

	return result;
}

int main(void) {
	int num1, num2, num3;
	printf("���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("���� ū ���ڴ� %d \n", max(num1, num2, num3));
	printf("���� ���� ���ڴ� %d", min(num1, num2, num3));

	return 0;
}