#include <stdio.h>
//10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해보자.
// 이는 서식문자의 활용에 대한 문제이므로 쉽게 해결할 수 있을 것이다.

int main(void) {
	int dec;

	printf("10진수를 입력하세요 : ");
	scanf_s("%d", &dec);
	printf("16진수 변환 결과 : ");
	printf("%X", dec);

	return 0;
}