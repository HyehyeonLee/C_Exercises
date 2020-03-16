#include <stdio.h>
// 두 개의 정수를 입력 받아서 최대 공약수를 구하는 프로그램을 작성해보자.

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

	while (1) { //유클리드 호제법
		rem = a % b;
		a = b;
		b = rem;
		if (b == 0) break;
		}

	return a;
}

int main(void) {
	int num1, num2;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);
	printf("두 수의 최대 공약수 : %d", printGCD(num1, num2));

	return 0;
}