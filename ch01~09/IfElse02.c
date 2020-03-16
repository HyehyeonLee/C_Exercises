#include <stdio.h>

int main(void) {
	int num1, num2;

	printf("두 수를 입력하세요!");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2) {
		printf("%d - %d = %d", num1, num2, num1 - num2);
	}
	else {
		printf("%d - %d = %d", num2, num1, num2 - num1);
	}
}