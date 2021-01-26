# include <stdio.h>

void multiply() {
	int A[2][3] = { {2, 3, -5}, {4, -3, 6} };
	int B[3][4] = { {7,4,3,-2}, {-5,1,0,2}, {2,3,-1,4} };
	int S[2][4];

	int i, j, k;
	int mul;

	for (i = 0; i < 2; i++)
		for (j = 0; i < 4; j++) {
			mul = 0;
			for (k = 0; k < 3; k++) {
				mul += A[i][k] * B[k][j];
			}
			S[i][j] = mul;
		}			
}

