#include <stdio.h>
// 프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼 3의 배수를 출력하는 프로그램을 작성해보자.
// 예를들어서 5를 입력 받았다면, 3 6 9 12 15를 출력해야 한다.

int main(void) {
	int num1 = 3, num2 = 1;
	int input;

	scanf_s("%d", &input);

	while (input > 0) {
		printf("%d ", num1 * num2);
		num2++;
		input--;
	}

	return 0;
}