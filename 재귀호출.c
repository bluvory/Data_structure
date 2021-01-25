#include <stdio.h>
#pragma warning (disable : 4996)


/*
// ���ȣ�� �ǽ�1

long int fact(int);
// ������������ Ư���� �����Լ����� �Ʒ��� �Լ��� ���� �� ���, �Լ��� �������� �ʰ� ����

int main() {
	int n, result;
	printf("\n ������ �Է��ϼ��� : ");
	scanf("%d", &n);

	result = fact(n);

	printf("\n\n %d�� ���丮�� ���� %d�Դϴ�. \n", n, result);

	return 0;
}

long int fact(int n) {
	// ���� ���� Ŀ�� �� �����Ƿ� int���� ǥ�� ���� �� ū long int �ڷ����� ���

	int value;

	if (n <= 1) {   // n�� 1�� �ɶ����� if���� �ǳʶڴ�
		printf("\n fact(1) �Լ� ȣ��! ");
		printf("\n fact(1) �� 1 ��ȯ");
		return 1;
	}
	else {  // n�� 2 �̻��� ��� else ������ ���� �ٽ� fact �Լ��� ȣ���Ѵ�
		printf("\n fact(%d) �Լ� ȣ��!", n);
		value = (n * fact(n - 1));
		printf("\n fact(%d) �� %d ��ȯ!", n, value);
		return value;
	}
}




// ���ȣ�� �ǽ�2

int recursion(int finish, int start) {
	// finish�� num�� ���� �޴� �Ű�����, start�� ����0�� ������ ������ �Ű�����

	if (finish == start) {
		for (int i = 0; i < start; i++) {
			printf("*");
		}
		printf("\n");
		return 0;
	}

	else {
		for (int i = 0; i < start; i++) {
			printf("*");
		}
		printf("\n");
		start++;
		recursion(finish, start);
	}

}

int main(void) {
	int num;
	printf("������ ���̸� �Է��Ͽ��ּ���! : ");
	scanf("%d", &num);
	recursion(num, 1);
	// num�� ���ϴ� ����, ���ʳ��̴� 0���� ����

}





// ������ Ǯ�����1

int fact(int a, int b) {
	if (b > 9) {
		return 0;
	}

	else {
		printf("%d x %d = %d �Դϴ�. \n", a, b, a * b);
		return fact(a, b + 1);
	}
}


int main(void) {
	int n;
	printf("����� ����ðڽ��ϱ�? : ");
	scanf("%d", &n);
	fact(n, 1);

}




// ������ Ǯ�����2

int sigma(int a, int sum) {

	if (a == 0) {
		return sum;
	}
	// �Ű����� a�� 0�� �Ǳ������� ��� ���� ���� �� �ֵ��� ����ó��
	else {
		return sigma(a - 1, sum + a);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("1���� %d������ ���� %d�Դϴ�. \n", n, sigma(n, 0));
}

*/


// ������ Ǯ�����3
int recursion(int finish, int start) {
	// finish�� num�� ���� �޴� �Ű�����, start�� ����0�� ������ ������ �Ű�����

	if (finish == start) {
		printf("*");
		return 0;
	}

	else {
		for (int i = start; i >= 1; i--) {
			printf("*");
		}
		printf("\n");
		recursion(finish, start-1);
		return 0;
	}

}

int main(void) {
	int num;
	printf("������ ���̸� �Է��Ͽ��ּ���! : ");
	scanf("%d", &num);
	recursion(1, num);
	// num�� ���ϴ� ����, ���ʳ��̴� 0���� ����

}