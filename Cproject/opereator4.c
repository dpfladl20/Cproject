#include <stdio.h>

int main() {

	int kor = 50, eng = 40, math = 60;

	// �հ�� ����� ���Ͻÿ�
	// �հ� : 00
	// ��� : 00

	int sum = 0;
	sum = kor + eng + math;
	double avg = 0.0;
	avg = sum / 3.0;		// avg = (double)sum / 3

	printf("�հ�:%d\n", sum);
	printf("���:%.2lf", avg);




	return 0;

}