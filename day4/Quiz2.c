#include <stdio.h>

int main() {

	//���� 144p
	// #1. 100~200 ���� �� 3�� 7�� ������� ����ϴ� ���α׷�

	for (int i = 100; i <= 200; i++) {
		if ((i % 3 == 0) && (i % 7 == 0)) {
			printf("%d", i);
		}
	}
	printf("\n");

	// #2. 2~9 ���� �� �ΰ��� �Է¹޾� �������� ����ϴ� ���α׷�
	// ���� 4�� 8�� �Է��ϸ� 4��~8�� ��� -> ��, 8�� 4�� �Է��ص� 4��~8���� ���

	// ������ ��
	int n1, n2;
	int start, end;
	printf("ù ��° ���� >> ");
	scanf("%d", &start);
	printf("�� ��° ���� >> ");
	scanf("%d", &end);

	// start�� end���� �� ũ�� �ٲ������
	int n3;		// temp ��� �ַ� ǥ�� 
	if (start > end){
		n3 = start;
		start = end;
		end = n3;
	}

	for (n1 = 1; n1 < 10; n1++){
		for (n2 = start; start <= end; n2++) {
			printf("%d * %d = %d\t", n2, n1, n1 * n2);
		}
		printf("\n");
	}


	return 0;
}