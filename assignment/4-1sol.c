// 과제 4-1 실습과제 (ox문제)

# include <stdio.h>
# pragma warning(disable: 4996)

int main(void) {
	char input_sol[10];
	int sum = 0;
	int sol_sum = 0;

	for (int i = 0; i < 10; i++) {
		scanf(" %c", &input_sol[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (input_sol[i] == 'O') {
			sum += 1;
			sol_sum += sum;
		}
		else if (input_sol[i] == 'X') {
			sum = 0;
		}
	}

	printf("정답은 : %d 입니다", sol_sum);
	return 0;
}