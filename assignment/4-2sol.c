// ���� 4-2 �ǽ����� (�ϳ���ž)

# include <stdio.h>

int count = 0;

void hanoi(int h_count, int start, int middle, int last) {
	if (h_count == 1) {
		count++;
		printf("%d -> %d \n", start, last);
	}
	else {
		hanoi(h_count - 1, start, last, middle);
		count++;
		printf("%d -> %d \n", start, last);
		hanoi(h_count - 1, middle, start, last);
	}
}

int main(void) {
	printf("������ 5���� ��� �̵� ���\n");
	hanoi(5, 1, 2, 3);
	printf("�� �̵� Ƚ���� : %d", count);
}