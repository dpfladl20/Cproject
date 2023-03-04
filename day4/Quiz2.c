#include <stdio.h>

int main() {

	//교재 144p
	// #1. 100~200 숫자 중 3과 7의 공배수를 출력하는 프로그램

	for (int i = 100; i <= 200; i++) {
		if ((i % 3 == 0) && (i % 7 == 0)) {
			printf("%d", i);
		}
	}
	printf("\n");

	// #2. 2~9 숫자 중 두개를 입력받아 구구단을 출력하는 프로그램
	// 만약 4와 8을 입력하면 4단~8단 출력 -> 단, 8과 4를 입력해도 4단~8단을 출력

	// 구구단 식
	int n1, n2;
	int start, end;
	printf("첫 번째 숫자 >> ");
	scanf("%d", &start);
	printf("두 번째 숫자 >> ");
	scanf("%d", &end);

	// start가 end보다 더 크면 바꿔버리기
	int n3;		// temp 라고 주로 표현 
	if (start > end){
		n3 = start;
		start = end;
		end = n3;
	}

	for (n1 = 1; n1 < 10; n1++){
		for (n2 = start; start <= end; n2++) {
			printf("%d * %d = %d\t", n2, n1, n1 * n2);
		}
		printf("\n");
	}


	return 0;
}