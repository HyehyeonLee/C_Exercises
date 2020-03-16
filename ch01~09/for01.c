#include <stdio.h>
// 프로그램 사용자로부터 두 개의 정수를 입력 받아서, 두 정수를 포함하여 그 사이에 존재하는 정수들의 합을 계산해서
// 출력하는 프로그램을 작성해보자. 예를 들어서 3과 5가 입력되면, 3+4+5의 결과가 출력되어야 한다.

int main(void) {
	int num1, num2;
	int sum = 0;

	printf("정수 두개 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	for (num1; num1 <= num2; num1++) {
		sum += num1;
	}

	printf("%d", sum);
}