// Array1.c 파일
#include<stdio.h>

int main1() {
	// 배열 : 변수들을 1열로 뭉쳐놓은 것
	char s;				// 문자 1개
	char str[10];		// 문자 배열(문자열) 10개

	int num;			// 정수변수 1개
	int numbers[100];	// 정수변수 100개 (배열)

	// ex)배열사용이유 1: 정수변수 10개를 만들고자 한다
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;			// 일반 변수
	int nn[10];			// 배열

	// ex)배열사용이유 2 : 반복문 사용을 위해서 (일반변수면 반복문처리가 불가능)
	// 일반 변수는 한번에 출력 불가능
	// 배열은 붙여놓고 첫번째 변수를 기준으로 일괄 출력 가능
	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		printf("%d ", nums[i]);					// 배열은 0번부터 시작(*nums + i) -> *은 현재위치를 뜻함
	}

	printf("\n %d \n", nums[0]);				// 0번 방은 첫번째 것
	printf("\n %d \n", nums[9]);				// 10번 방은 첫번째 것

	// []를 통해서 변수를 붙여놓음

	return 0;
}