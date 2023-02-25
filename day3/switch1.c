#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5() {
	// switch ~ case ~ break
	// switch : 조건문, 같은 값을 찾을 때 사용하는 조건문

	// if문 : 범위 조건, 일치/불일치 조건
	// switch문 : 무조건 일치조건(==)

	char word = 'a';
	// 비교대상이 되는 변수를 ()에 적는다
	switch (word) {
	case 'a':						//word == 'a'
		printf("단어는 a입니다");
		break;						// case가 끝나면 break;
	case'b':						//word == 'b'
		printf("단어는 b입니다");
		break;
	case 'c':						//word == 'c'
		printf("단어는 c입니다");
		break;
	default:						//일치하는 case가 없음
		printf("해당하는 단어가 없습니다");
	}

	// switch는 (변수)와 일치하는 애를 찾기

	// 1~4 비교, default 도 넣어주기
	// 결과값 : 1을 선택했습니다

	int num = 0;
	scanf("%d", &num);
	printf("번호를 선택하세요>> ");
	
	switch (num) {
	case 1 :
		printf("1을 선택했습니다");
		break;
	case 2:
		printf("2를 선택했습니다");
		break;
	case 3:
		printf("3을 선택했습니다");
		break;
	case 4:
		printf("4를 선택했습니다");
		break;
	default :
		printf("해당하는 번호가 없습니다");
	}
	
	


	return 0;
}