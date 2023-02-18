#include <stdio.h>

int main4() {
	/*
	작성자 : 000
	작성날짜 : 2023-02-18
	기능 : printf 로 문자열 출력
	
	이름, 년도, 월, 일 f ==> 변수
	문자열[]변수 : 이름
	정수변수 : 년도,월,일
	문자변수 : f
	*/

	char name[] = "이예림";
	int year = 2023;
	int month = 02;
	char one = 'f';

	printf("작성자 :%s\n", name);
	printf("작성날짜 : %d-%d-18\n", year, month);
	printf("기능 : print%c 로 문자열 출력", one);



	return 0;
}