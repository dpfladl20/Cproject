#include <stdio.h>

int main() {
	// 교제 122 #2
	// 정수를 입력받아서 홀수인지 짝수인지 판별
	// 홀짝 : 2로 나눈 나머지가 0이면 짝수, 1이면 홀수

	//printf("정수를 입력하세요>> ");
	//int num = 0;
	//scanf("%d", &num);
	//if (num % 2 == 0) {
		//printf("짝수입니다\n");
	//}
	//else {
		//printf("홀수입니다");
	//}


	// #3
	// 나이에 따른 지하철 요금표
	// 나이를 입력하면 -> 요금을 안내해주는 프로그램
	/*
	6세 미만, 65세 이상 : 0원
	6세 이상, 13세 미만 : 500원
	13세 이상, 19세 미만 : 900원
	19세 이상, 65세 미만 : 1250원
	*/

	//int age = 0;
	//printf("나이를 입력하세요 >> ");
	//scanf("%d", &age);

	//if (age < 6 II age >= 65) {
	//	printf("0원");
	//}
	//else if (age >= 6 /* && age < 13*/) {
	//	printf("500원");
	//}
	//else if (age >= 13 /* && age < 19*/) {
	//	printf("900원");
	//}
	//else {
	//	printf("1250원");
	//}


	// if ~ else if ~ else

	// 교제 123쪽 #4
	// 중간고사 평균을 구하고, 점수에 따라서 학점을 부여
	// switch 사용
	// 90이상 A, 80이상 B, 70이상 C, 60이상 D, 60미만 F
	// 국어 88, 영어 90, 수학 58, 사회 81, 과학 72
	// () 내용과 case가 같은지 비교
	// ~58과 50과 같다고 비교하는 방법

	
	//int kor = 88, eng = 90, mat = 58, soc = 81, sci = 72;
	//int sum = kor + eng + mat + soc + sci;
	//double avg = sum / 5.0;

	// switch는 실수 X -> 정수로 확인해야함
	//switch ((int)avg /10) {
	//case 10:
	//	printf("A학점");
	//	break;
	//case 9:
	//	printf("A학점");
	//	break;
	//case 8:
	//	printf("B학점");
	//	break;
	//case 7:
	//	printf("B학점");
	//	break;
	//case 6:
	//	printf("B학점");
	//	break;
	//default :
	//	printf("F학점");
	//	break;
	//}

	
	// 윤년 구하는 프로그램 만들기
	// 윤년 : 년도가 4의 배수이면서 100의 배수가 아닌 년도 OR 400의 배수인 년도
	// 윤년에 해당하면 -> 2월이 29일로 끝남
	// 년도를 입력하면 해당 년도가 윤년인지 판별해주는 프로그램 만들기


	int year = 0;
	printf("년도를 입력하세요 >> ");
	scanf("&d", &year);

	if (year % 4 == 0 && year % 100 != 0) {
		printf("윤년입니다");
	}
	else if (year % 400 == 0) {
		printf("윤년입니다");
	}
	else {
		printf("윤년이 아닙니다");
	}
		

	return 0; 

}