#include <stdio.h>

int main5() {
	// 반복은 while
	// 교제 128p
	int num = -1;

	//while (num != -1) {

	//	printf("숫자를 입력하세요(-1 입력 시 종료):");
	//	scanf("%d", &num);
	//	if (num == -1) {
	//		printf("종료합니다");				// 한 줄일때는 {} 생략 가능
	//	}
	//	else {
	//		printf("%d(을)를 입력하셨네요.\n", num);
	//	}
	//}

	// do-while : 한번은 무조건 실행이 되게끔 해주는 while문
	do 
	{

		printf("숫자를 입력하세요(-1 입력 시 종료):");
		scanf("%d", &num);
		if (num == -1) {
			printf("종료합니다");				// 한 줄일때는 {} 생략 가능
		}
		else {
			printf("%d(을)를 입력하셨네요.\n", num);
		}
	} while (num != -1);


	return 0;
}