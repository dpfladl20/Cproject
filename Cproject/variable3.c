#include <stdio.h>

int main4() {
	/*
	�ۼ��� : 000
	�ۼ���¥ : 2023-02-18
	��� : printf �� ���ڿ� ���
	
	�̸�, �⵵, ��, �� f ==> ����
	���ڿ�[]���� : �̸�
	�������� : �⵵,��,��
	���ں��� : f
	*/

	char name[] = "�̿���";
	int year = 2023;
	int month = 02;
	char one = 'f';

	printf("�ۼ��� :%s\n", name);
	printf("�ۼ���¥ : %d-%d-18\n", year, month);
	printf("��� : print%c �� ���ڿ� ���", one);



	return 0;
}