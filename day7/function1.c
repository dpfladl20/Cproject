#include <stdio.h>

// 함수 바깥에서 만드는 변수는 '전역변수'
// 많이 만들면 프로그램 성능이 저하됨(전역변수는 좁은 공간에 삭제되지 않고 계속 차지하고 있음)
int global_variable = 0;



// 숫자 2개를 받아서 서로 위치를 바꾼다
int Swap_old (int num1, int num2) {
	int temp = num1;	// num1의 값을 백업
	num1 = num2;		// num1의 1값이 제거되고 num2의 값이 들어감
	num2 = temp;

	// 값이 복제되기 때문에 원본 변수에는 영향을 줄 수 없음
	//함수 안에서 만들어진 매게변수와 지역변수는 {}가 끝나면 공간이 없어진다
}	

int Swap_new(int* num1, int* num2) {
	// 위치를 넘겨받아서 원본의 위치를 활용
	int temp = *num1;
	*num1 = *num2;			// 위치(주소)를 찾아가서 그 값을 변경
	*num2 = temp;

	// 포인터를 제외하고는 {}를 넘어갈 수 없다
}

int main7() {
	// C언어의 구조 : 함수 + 구조체 + 포인터

	int num1 = 1, num2 = 2;
	printf("변경전 %d, %d\n", num1, num2);
	
	Swap_old(num1, num2);
	Swap_new(&num1, &num2);

	printf("변경후 %d, %d\n", num1, num2);

	return 0;
}