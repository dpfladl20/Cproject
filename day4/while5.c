#include <stdio.h>

int main7() {
	// while 문으로 1~10까지의 합 구하기

	int num = 0;
	int sum = 0;

	while (num < 11){
		num++;
		sum += num;
	}
	printf("1~10까지의 합은 %d입니다", sum);




	return 0;
}