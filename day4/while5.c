#include <stdio.h>

int main7() {
	// while ������ 1~10������ �� ���ϱ�

	int num = 0;
	int sum = 0;

	while (num < 11){
		num++;
		sum += num;
	}
	printf("1~10������ ���� %d�Դϴ�", sum);




	return 0;
}