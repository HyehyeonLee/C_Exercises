#include <stdio.h>
// 하나의 정수를 입력 받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자.
// 예를 들어서 5가 입력되면 25가 출력되어야 한다.

int main(void) {
	int num1;

	scanf_s("%d", &num1);
	num1 *= num1;
	printf("%d", num1);

	return 0;
}