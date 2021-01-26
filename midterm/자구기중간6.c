# include <stdio.h>
# pragma warning (disable : 4996)

int main(void) {
	int x, n, k;

	printf("밑을 입력하시오: ");
	scanf("%d", &x);
	printf("지수를 입력하시오: ");
	scanf("%d", &n);

	k = power(x, n);
	printf("%d의 %d제곱은 %d", x, n, k);
}

power(int x, int n) {
	if (n == 0) return 1;
	else return (x * power(x, n - 1));
}

