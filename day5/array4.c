#include <stdio.h>

int main4() {
	// ���� 158p
	// #1. ���̰� 5�� int�� �迭�� �����ϰ�, �ʱ�ȭ�Ѵ�. �̶� �� ��Ҵ� ���ϴ� ���� ��´�
	// �ش� �迭�� ���� ���� ����� ����ϱ�
	/*
	1. ���� 2. ���
	*/

	// ���� § ��
	//int num[5] = { 0,1,2,3,4 };
	//scanf("%d", &num[0]);
	//scanf("%d", &num[1]);
	//scanf("%d", &num[2]);
	//scanf("%d", &num[3]);
	//scanf("%d", &num[4]);
	//int sum = num[0] + num[1] + num[2] + num[3] + num[4];
	//printf("%d", sum);
	//printf("%d", sum / 5);

	int num[5] = { 0,1,2,3,4 };
	int sum = 0;
	double avg = 0.0;
	sum = num[0] + num[1] + num[2] + num[3] + num[4];
	avg = (double)sum / 5.0;
	
	printf("���� : %d \n", sum);
	printf("��� : %lf \n", avg);


	// #2. ����ܾ �ϳ� �Է¹޾Ƽ� �������� ����ϴ� ���α׷�
	/*
	�Է°� : hello
	��°� : olleh
	*/
	// �ݺ����� ������ ���� �� �ֳ�
	char str[64] = {'\0', };		//�ʱ�ȭ, 64ĭ ����
	char reverse[64] = { 0, };		//�ʱ�ȭ
	
	scanf("%s", str);		// str[0] = 'h', str[1] = 'e', str[2] = 'l', ...
	int j = 0;
	for (int i = 63; i >= 0; i--) {			// 64ĭ�� �����ϸ� 63������ �ִ�
		if (str[i] == '\0') {
			continue;
		}
		reverse[j] = str[i];
		j++;
	}
	printf("%s", reverse);


	// NULL���ڰ� �ƴ� ��������
	// reverse[0] = str[4];
	// reverse[1] = str[3];
	// reverse[2] = str[2];
	// reverse[3] = str[1];
	// reverse[4] = str[0];



	


	return 0;
}