#include <stdio.h>

int main(void) {
	int num1;
	int result = 0;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num1);

	for (int num2 = num1; num2 > 0; num2--) {
		result = num2 * (num2 - 1);
	}

	printf("%d", result);

	return 0;
}