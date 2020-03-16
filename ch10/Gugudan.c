#include <stdio.h>

// 프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해보자.
// 예를 들어서 프로그램 사용자가 3과 5를 입력하면 3, 4, 5단이 출력되어야 하고,
// 2와 4를 입력하면 2, 3, 4단이 출력되어야 한다.
// 단 한가지 조건이 있다. 사용자는 두 개의 숫자를 입력 할 때에 입력 순서에 자유로워야 한다.
// 즉 3과 5를 입력하건 5와 3을 입력하건 프로그램은 같은 결과를 출력해야 한다.

void gugudan(int num1, int num2) {
	int x, y;
	if (num1 < num2) { //범위 지정
		x = num1;
		y = num2;
	}
	else {
		x = num2;
		y = num1;
	}

	for (int i = x; i <= y; i++) { //구구단 출력
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d \n", i, j, i * j);
		}
		printf("\n");
	}
}

int main(void) {
	int num1, num2;

	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);
	gugudan(num1, num2);

	return 0;
}