#include <stdio.h>
// 입력 받은 두 정수를 나누었을 때 얻게되는 몫과 나머지를 출력하는 프로그램을 작성해보자.
// 예를 들어서 7과 2가 입력되면 몫으로 3, 나머지로 1이 출력되어야 한다.

int main(void) {
	int num1, num2;

	scanf_s("%d %d", &num1, &num2);
	printf("몫 : %d, 나머지 : %d \n", num1 / num2, num1 % num2);

	return 0;
}