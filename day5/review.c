#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main0() {
	// 제어문 : 조건문, 반복문, 기타제어문
	// 제어문 : 원래 코드는 위에서 아래로, 왼쪽에서 오른쪽으로 진행이 되지만, 그 흐름을 바꿀 수 있는 문법
	// if, switch, for, while, break, continue, dowhile
	
	// 조건문 if ~ else if ~ else
	// if(조건식){조건식이 맞을때만 실행할 코드}
	int target = 5;
	if (target == 5) {
		printf("5는 5와 같다\n");
	}
	else if (target != 5) {
		printf("5와 같지 않다\n");
	}
	else {
		printf("해당하지 않는다\n");
	}

	// 조건문 switch ~ case ~ break
	// switch(){} : ()내용과  case 내용이 같은 부분부터 코드 실행 -> 요즘에는 잘 안씀
	switch (5) {
	case 1:
		printf("대상은 1과 같다");
		break;
	case 5:
		printf("대상은 5와 같다");
		break;
	default:
		printf("대상과 같은 값은 없다");

	}

	// 반복문 while
	// while은 플래그 i가 필요함, 중복코드를 관리
	int i = 0;
	while (i <= 3) {
		printf("\n반복횟수 %d번\n", i + 1);		// i보다 1 더 큰 숫자 출력
		i++;			// 변수 i에 들어있는 값을 1 증가시킴 (i = i+1)
	}

	// for(){} : 반복하고자 하는 코드만 남은
	for (int i = 0; i < 3; i++) {				// 조건 한번에 입력(; ; )
		printf("\n반복횟수 %d번\n", i + 1);		// 반복하고자 하는 코드만 남음
	}

	// 기타 제어문 continue, break
	// break : 반복문을 종료시킨다 (switch 종료)
	// continue : 반복문 처음()으로 돌아감 (1회성 취소)
	for (int i = 0; i < 3; i++) {
		if (i == 2) {
			break;				// i가 2일때 반복문 종료
		}
	}

	for (int i = 0; i < 3; i++) {
		if (i == 1) {
			continue;			// continue보다 밑에 있는 코드는 무시하고 위로 올라감
		}
	}

	return 0;

}