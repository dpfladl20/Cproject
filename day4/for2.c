#include <stdio.h>

int main9() {
	// ���� 135p
	for (int i = 0; i < 3; i++) {
		printf("i is %d now \n", i);
	}

	//int i = 0;
	//while (i < 3) {
	//	printf("i is %d now \n");
	//	i++;
	//}


	// ���� 136p
	int num;			// for�� �ٱ��� ����

	// for �ȿ��� �����ϸ� for�� ����� ���ÿ� ����(�������)�� ������
	for (num =0; num !=-1;) {
		printf("���ڸ� �Է��ϼ���(-1 �Է½� ����): ");
		scanf("%d", &num);
	}

	/*
	for(�ʱⰪ;���ǽ�;������[�����]){
		������ ������ �ݺ��� �ڵ�;
	}
	*/

	return 0;
}