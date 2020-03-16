#include <stdio.h>
// 프로그램 사용자로부터 두 개의 정수를 입력 받아서 두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램을 작성해보자.

int main(void) {
	int num1, num2;

	scanf_s("%d %d", &num1, &num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d", num1, num2, num1 * num2);

	return 0;
}