#include <stdio.h>

int main4() {
	// 반복은 while
	// 교제 128p
	int num = 0;

	while (num != -1) {

		printf("숫자를 입력하세요(-1 입력 시 종료):");
		scanf("%d", &num);
		if (num == -1) {
			printf("종료합니다");				// 한 줄일때는 {} 생략 가능
		}
		else {
			printf("%d(을)를 입력하셨네요.\n", num);
		}
	} 



	return 0;
}