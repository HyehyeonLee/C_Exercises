#include <stdio.h>

int main(void) {
	int kor, eng, math;

	printf("����, ����, ���� ������ �Է� �ϼ��� : ");
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