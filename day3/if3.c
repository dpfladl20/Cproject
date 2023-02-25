#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	// if(){} : ()에 있는 조건이 맞을때 {}코드 실행
	// if(){} else{} : ()가 맞을때 if의 {} 실행, 틀릴땐 else{}을 실행
	
	// 숫자
	// 10보다 작은지 검사
	// 100보다 작은지 검사
	// 1000보다 작은지 검사
	// 1000보다 큰지 검사

	int num = 10;
	if (num < 10) {
		printf("10보다 작다");
	}
	else if (num < 100) {			// 위에 if가 틀렸을 경우 검사
		printf("100보다 작다");
	}
	else if (num < 1000) {			// 위에 있는 if가 틀렸을 경우 검사
		printf("1000보다 작다");
	}
	else {							// 다 틀렸을 경우
		printf("1000 이상이다");
	}

	int age = 21;
	if (age > 20) {
		printf("성인");
	}
	else if (age > 14) {
		// else if(){} : 위에 있는 조건이 틀리면 검사
		printf("청소년");
	}
	else {
		printf("미성년자");
	}

	/*
	if(조건1){
		조건1이 맞을경우 실행
	}
	else if(조건2){
		조건2가 맞을 경우 실행
	}
	else if(조건3){
		조건3이 맞을 경우 실행
	}
	else{
		모든 조건이 틀렸을 경우 실행
	}
	*/

	printf("\nQuiz\n");
	int score = 0;
	printf("점수를 입력하세요>> ");
	scanf("%d", & score);

	if (score >= 90) {
		printf("A학점");
	}
	else if (score >= 80) {
		printf("B학점");
	}
	else if (score >= 70) {
		printf("C학점");
	}
	else if (score >= 60) {
		printf("D학점");
	}
	else {
		printf("F학점");
	}
	

	// 90점 이상은 A학점
	// 80점 이상은 B학점
	// 70점 이상은 C학점
	// 60점 이상은 D학점
	// 그 이하는 F학점

	return 0;
}