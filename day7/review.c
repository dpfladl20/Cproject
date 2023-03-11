#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MyFunction() {
    printf("hello");
    printf(", wolrd!");
}

void MyFunction2(int number) {
    printf("hello %d", number);
}
double MyFunction4(int n1, int n2) {
    int result = (double)n1 / n2;
    return result;
}
int main0() {
    MyFunction();    // 반복문이 아닌 함수를 사용하는 이유
    MyFunction();    // 중간에 코드 삽입 가능

    double num2 = MyFunction4(3, 4);
    printf("결과는 %lf\n", num2);
    num2 = MyFunction4(9, 3);
    printf("결과는 %lf\n", num2);




    return 0;
}
