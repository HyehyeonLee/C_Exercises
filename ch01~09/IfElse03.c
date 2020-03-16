#include <stdio.h>

int main(void) {
	int kor, eng, math;

	printf("국어, 영어, 수학 점수를 입력 하세요 : ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	int avg = (kor + eng + math) / 3;

	if (avg >= 90) {
		printf("A");
	}
	else if (avg >= 80) {
		printf("B");
	}
	else if (avg >= 70) {
		printf("C");
	}
	else if (avg >= 50) {
		printf("D");
	}
	else {
		printf("F");
	}
}