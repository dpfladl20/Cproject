#include <stdio.h>

int main() {
	// ���� 174p
	int arr[5] = { 1,2,3,4,5 };
	printf("�迭�� �̸� : %p \n", arr);				// �迭�� �ּҴ�
	printf("ù��° ��� : %p \n", &arr[0]);			// �迭�� 0���� �ּҿ� ����
	printf("�ι�° ��� : %p \n", &arr[1]);
	printf("����° ��� : %p \n", &arr[2]);
	printf("�׹�° ��� : %p \n", &arr[3]);
	
	printf("\n");
	printf("ù��° ��� : %p \n", arr + 0);			// �ּҴ� +1�� �Ҷ����� ��ĭ���� �̵��Ѵ�
	printf("�ι�° ��� : %p \n", arr + 1);			// +1�� �Ը�� �ڷ����� ����(int 4ĭ, char 1ĭ)
	printf("����° ��� : %p \n", arr + 2);
	printf("�׹�° ��� : %p \n", arr + 3);

	printf("\n");
	printf("ù��° �� : %d \n", *arr + 0);			//�迭�� 0���� �����ϴ� ����
	printf("ù��° �� : %d \n", arr[0]);

	printf("�ι�° ��� : %p \n", (&*arr) + 1);		// &�����ڿ� *�������ڴ� ���� ���ȴ�
	printf("�׹�° �� : %d \n", *(arr+3));		// 4

	return 0;
}