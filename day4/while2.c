#include <stdio.h>

int main2() {
	// 반복문 while
	// while(){}
	// if (){} : () 조건이 맞으면 {} 코드 실행
	// while(){} : ()조건이 맞으면 {} 실행하고 ()로 돌아간다
	
	//if (1) {		// 1 == True, 0 == False
	//	printf("if문을 실행합니다 \n");
	//}
	//printf("if문 끝");

	while (1) {
		printf("while문을 실행합니다 \n");
	}
	printf("while문 끝");

	//if문과 while문의 차이 : 조건이 맞으면 실행하고 돌아가냐 안돌아가냐의 차이
	// while문 특징 : 조건이 맞으면 {} 실행하고 위로 올라가서 ()조건을 다시 검사 (틀릴때까지, 계속반복)



	return 0;
}