// 과제 4-3 실습과제 (행렬곱)

# include <stdio.h>
# pragma warning (disable:4996)

void matrix_multiply() {
	int input_num;
	int A[3][3];
	int B[3][3];
	int S[3][3];

	for (int i= 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	int sum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum = 0;
			for (int k = 0; k < 3; k++) {
				sum += A[i][k] * B[k][j];
			}
			S[i][j] = sum;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", S[i][j]);
		}
		printf("\n");
	}

}

int main(void) {
	matrix_multiply();
	return 0;
}