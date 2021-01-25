#include <stdio.h>
#define max(a,b) ((a>b)?a:b)
// max(a,b)�� a,b ���� �� ū ���� a��, �������� b�� �ٲ۴ٰ� ����
#define max_degree 50
// max_degree�� ���� 50���� ����


typedef struct {
	int degree;
	float coef[max_degree];
} polynomial;


polynomial addpoly(polynomial, polynomial);
void printpoly(polynomial);


int main() {
	polynomial A = { 3,{4,3,5,0} };
	// ���׽� A�� �ʱ�ȭ 4x^3 + 3x^2 + 5x + 0
	polynomial B = { 4,{3,1,0,2,1} };
	// ���׽� B�� �ʱ�ȭ 3x^4 + 1x^3 + 0x^2 + 2x + 1
	polynomial C;
	C = addpoly(A, B);

	printf("\n A(x) = "); printpoly(A);
	printf("\n B(x) = "); printpoly(B);
	printf("\n C(x) = "); printpoly(C);
	// ���׽� A, B, C ����ϱ�!

	return 0;
}


polynomial addpoly(polynomial A, polynomial B) {
	polynomial C;
	int A_index = 0, B_index = 0, C_index = 0;
	int A_degree = A.degree, B_degree = B.degree;
	C.degree = max(A.degree, B.degree);
	// C�� ���� = A�� ������ B�� ���� �� ū ��

	while (A_index <= A.degree && B_index <= B.degree) {
		if (A_degree > B_degree) {
			C.coef[C_index++] = A.coef[A_index++];
			A_degree--;
		}  // A�� ������ B�� �������� ũ�� A�� ��� �Է�

		else if (A_degree == B_degree) {
			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
			A_degree--;
			B_degree--;
		}  // A�� ������ B�� ������ ������ A+B�� ��� �Է�

		else {
			C.coef[C_index++] = B.coef[B_index++];
			B_degree--;
		}  // B�� ������ A�� �������� ũ�� B�� ��� �Է�
	}
	return C;
}


void printpoly(polynomial P) {
	int i, degree;
	degree = P.degree;

	for (i = 0; i <= P.degree; i++) {
		printf("%3.0f x^%d", P.coef[i], degree--);
		// 3ĭ ��� ���, .0f�� �Ҽ��� ù��°���� ���
		if (i < P.degree)
			printf("+");
	}
	printf("\n");
}