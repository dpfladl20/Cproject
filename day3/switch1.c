#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main5() {
	// switch ~ case ~ break
	// switch : ���ǹ�, ���� ���� ã�� �� ����ϴ� ���ǹ�

	// if�� : ���� ����, ��ġ/����ġ ����
	// switch�� : ������ ��ġ����(==)

	char word = 'a';
	// �񱳴���� �Ǵ� ������ ()�� ���´�
	switch (word) {
	case 'a':						//word == 'a'
		printf("�ܾ�� a�Դϴ�");
		break;						// case�� ������ break;
	case'b':						//word == 'b'
		printf("�ܾ�� b�Դϴ�");
		break;
	case 'c':						//word == 'c'
		printf("�ܾ�� c�Դϴ�");
		break;
	default:						//��ġ�ϴ� case�� ����
		printf("�ش��ϴ� �ܾ �����ϴ�");
	}

	// switch�� (����)�� ��ġ�ϴ� �ָ� ã��

	// 1~4 ��, default �� �־��ֱ�
	// ����� : 1�� �����߽��ϴ�

	int num = 0;
	scanf("%d", &num);
	printf("��ȣ�� �����ϼ���>> ");
	
	switch (num) {
	case 1 :
		printf("1�� �����߽��ϴ�");
		break;
	case 2:
		printf("2�� �����߽��ϴ�");
		break;
	case 3:
		printf("3�� �����߽��ϴ�");
		break;
	case 4:
		printf("4�� �����߽��ϴ�");
		break;
	default :
		printf("�ش��ϴ� ��ȣ�� �����ϴ�");
	}
	
	


	return 0;
}