#include <stdio.h>

int main3() {
	// while ��
	// wihle(){} : ���Ǹ����� ���ѹݺ� ==> ���� ���ϴ� Ƚ���� �ݺ��ϱ� ���� (�÷���, ������)

	int i = 0;			// �÷���(������)
	while (i < 5) {
		printf("ȫ�浿 \n");
		i++;		// �÷��׸� ���ؼ� �ݺ�Ƚ���� ����                                 
	}

	// ���� 127p
	int num = 0;		// �÷���.

	while (num < 3) {
		printf("num is %d now \n", num);
		num++;
	}



	return 0;
}