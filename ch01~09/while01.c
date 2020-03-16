#include <stdio.h>
// 프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 "Hello World!"를 출력하는 프로그램을 작성해보자

int main(void) {
	int num;

	scanf_s("%d", &num);

	while (num > 0) {
		printf("Hello World! \n");
		num--;
	}

	return 0;
}