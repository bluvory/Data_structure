#include <stdio.h>

/*

// �迭�ǽ�1
int main(void) {

	int i;

	int score[3] = { 91, 86, 74 };  // ũ�Ⱑ 3�� int �� �迭 �ʱ�ȭ

	char grade[3] = { 'A', 'B', 'C' };  // ũ�Ⱑ 3�� char �� �迭 �ʱ�ȭ

	printf("\n *** �г⺰ ��� ���� *** \n\n");

	for (i = 0; i < 3; i++) {
		printf("%d�г� : ���� = %d ��� = %c\n", i + 1, score[i], grade[i]);
	}

}




// �迭�ǽ�2
#pragma warning (disable : 4996)
int main(void) {
	int i = 0, n;
	int multiply[9];

	printf("1~9�� ������ �Է��ϼ���: ");

	while (1) { // n�� ���� 1~9 ������ ���ڸ� �� �� �ֵ��� ���ѷ��� ����
		scanf("%d", &n);

		if(n < 0 || n>9) {
			printf("\n 1~9�� ������ �Է��ϼ���: ");
		}
		else {
			break;
		}
	}
	printf("\n");
	for (i = 0; i < 9; i++) {
		multiply[i] = n * (i + 1);           // ��갪�� �迭�� ����
		printf("%d * %d = %d \n", n, (i + 1), multiply[i]);
	}
}




// ���ڿ� �ǽ�1
int main(void) {
	char str[20] = "Data Structure!";  //ũ�Ⱑ 20�� ������ �迭 ���� �� �ʱ�ȭ
	int i;
	printf("\n ���� �迭 str[]: ");

	for (i = 0; str[i]; i++) {    // ���ǽ��� str�� ���� �����Ⱚ�� �ƴҶ�����!
		printf("%c", str[i]);
	}
	printf("\n");
}




// ���ڿ� �ǽ�2
#pragma warning (disable : 4996)

int main() {
	int i, length = 0;
	char str[50];  // char ��, ũ�Ⱑ 50�� �迭 ����

	printf("\n ���ڿ��� �Է��ϼ��� : ");
	scanf("%s", &str);     // ���ϴ� ���ڿ��� �Է�
	printf("\n �Էµ� ���ڿ��� \n");

	for (i = 0; str[i]; i++) {   // ������ ���� ������ ���� ����, ������ ���� �������� �� �ݺ����� �����
		printf("%c", str[i]);
		length += 1;
	}

	printf("�Դϴ�.");
	printf("\n\n �Էµ� ���ڿ��� ���� = %d �Դϴ�. \n", length);

	return 0;
}

*/



