#include <stdio.h>
#include <string.h>


/*
// ����ü ���� �ǽ�1
struct employee {   // employee��� ����ü ����
	char name[10];
	int year;
	int pay;
};

int main() {
	int i;
	struct employee Lee[4] = {     // �ռ� �����ߴ� employee��� ����ü�� name, year, pay ������ �Է�
		{"����ȣ", 2014, 4200},
		{"���ѿ�", 2015, 3500},
		{"�̻��", 2015, 3500},
		{"�̻��", 2016, 2900}

	};
	
	for (i = 0; i < 4; i++) {         // �ݺ����� ���� �迭�ȿ� ������� �� ���ֳ� Ȯ��
		printf("\n �̸� : %s", Lee[i].name);
		printf("\n �Ի� : %d", Lee[i].year);
		printf("\n ���� : %d", Lee[i].pay);
	}
	return 0;
}
*/




// ����ü ���� �ǽ�2
struct book {
	char title[30];
	char author[30];
	int price;
};

int main(void) {
	struct book my_book = { "HTML�� CSS", "ȫ�浿", 28000 };
	struct book c_book = { "C�� ���� ���� �ڷᱸ������", "������", 27000 };

	printf("ù ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n",
		my_book.title, my_book.author, my_book.price);
	printf("�� ��° å�� ������ %s�̰�, ���ڴ� %s�̸�, ������ %d���Դϴ�.\n",
		c_book.title, c_book.author, c_book.price);

	return 0;
}

