#include <stdio.h>

int main() {

	int kor = 50, eng = 40, math = 60;

	// 합계와 평균을 구하시오
	// 합계 : 00
	// 평균 : 00

	int sum = 0;
	sum = kor + eng + math;
	double avg = 0.0;
	avg = sum / 3.0;		// avg = (double)sum / 3

	printf("합계:%d\n", sum);
	printf("평균:%.2lf", avg);




	return 0;

}