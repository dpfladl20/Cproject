#include <stdio.h>

int main8() {
	// for 문
	// for(;;){}
	// while문이 너무 어려워서 좀더 쉽게 쓸 수 있는 for문 제공

	// while 문으로 1~10까지의 합 구하기
	// while문은 1. 플래그를 따로 만들어주고 2. {}안에서 플래그를 증감 3.()안에서 플래그를 검사
	int num = 1, sum = 0;

	while (num <= 10) {
		num++;
		sum += num;
	}
	printf("1~10까지의 합은 %d입니다", sum);

	//for문 : () 안에다가 플래그를 다 몰아넣는다
	int add = 0;

	for (int i = 1; i <= 10; i++) {
		add += i;			// {}안에는 내가 반복하고자 하는 코드만 입력
	}
	printf("1~10까지의 합은 %d입니다", add);



	return 0;
}