# include <stdio.h>

// ¹è¿­ÀÇ µ¡¼À
/*
int matrix_multiply() {

	int A[2][2] = { {1,2},{3,4} };
	int B[2][2] = { {5,6},{7,8} };
	int C[2][2];

	int i, j, k, sum;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum = A[i][j] + B[i][j];
			C[i][j] = sum;
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}


}

int main(void) {
	matrix_multiply();
	return 0;
}
*/


// ¹è¿­ÀÇ °ö¼À

int matrix_multiply2() {

	int A[2][2] = { {1,2},{3,4} };
	int B[2][2] = { {5,6},{7,8} };
	int C[2][2];

	int i, j, k, sum;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			sum = 0;
			for (int k = 0; k < 2; k++) {
				sum += A[i][k] * B[k][j];
			}
			C[i][j] = sum;
		}
	} 

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}


}

int main(void) {
	matrix_multiply2();
	return 0;
}