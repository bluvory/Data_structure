# include <stdio.h>
# pragma warning (disable : 4996)

int main(void) {
	int x, n, k;

	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	k = power(x, n);
	printf("%d�� %d������ %d", x, n, k);
}

power(int x, int n) {
	if (n == 0) return 1;
	else return (x * power(x, n - 1));
}

