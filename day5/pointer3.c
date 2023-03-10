#include <stdio.h>

int main7() {
	// 교재 168~170p
	// #1
	int a = 10;					// 변수 a에 10 담아서 만들고
	int* p = &a;					 // 포인터 변수p에 a의 주소를 담아 만들고
	*p = 20;							// 역참조해서 20넣으니깐 a에 20들어가고
	printf("%d", a);
	*p = 50;							// 역참조해서 50 넣으니깐 a에 50 들어감
	printf("%d", a);

	// 2050

	printf("\n");
	// #2. 정수 10을 저장하는 int형 변수 number를 선언 및 초기화하고
	// number가 저장된 메모리주소를 저장하는 포인터변수 pnumber를 선언한다
	// 그리고 printf 함수를 호출해 정수 10과 변수 number의 주소를 출력하시오
	// 이때 printf 함수의 출력 데이터로는 포인터변수 pnumber만을 이용하시오

	int number = 10;
	int* pnumber = &number;

	printf("%d \n", *pnumber);
	printf("%p", pnumber);

	// #3. 코드 완성하기
	int *ptr;
	int num1 = 5;
	int num2 = 8;

	// Todo : 코드를 완성해주세요

	ptr = &num1;
	printf("%d\n", *ptr);				// 5


	// Todo : 코드를 완성해주세요

	ptr = &num2;
	printf("%d\n", *ptr);				// 8


	// #4. 코드 완성하기
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1, * ptr2 = &n2;
	printf("%d %d\n", *ptr1, *ptr2);		// 결과값 = 100 200



	// Todo : 여기에 코드 작성

	ptr1 = &n2;
	ptr2 = &n1;
	printf("%d %d \n", *ptr1, *ptr2);		// 결과값 = 200 100

	


	return 0;
}