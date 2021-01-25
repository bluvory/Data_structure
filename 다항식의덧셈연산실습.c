#include <stdio.h>
#define max(a,b) ((a>b)?a:b)
// max(a,b)를 a,b 비교후 더 큰 값을 a로, 작은값을 b로 바꾼다고 정의
#define max_degree 50
// max_degree의 값을 50으로 정의


typedef struct {
	int degree;
	float coef[max_degree];
} polynomial;


polynomial addpoly(polynomial, polynomial);
void printpoly(polynomial);


int main() {
	polynomial A = { 3,{4,3,5,0} };
	// 다항식 A를 초기화 4x^3 + 3x^2 + 5x + 0
	polynomial B = { 4,{3,1,0,2,1} };
	// 다항식 B를 초기화 3x^4 + 1x^3 + 0x^2 + 2x + 1
	polynomial C;
	C = addpoly(A, B);

	printf("\n A(x) = "); printpoly(A);
	printf("\n B(x) = "); printpoly(B);
	printf("\n C(x) = "); printpoly(C);
	// 다항식 A, B, C 출력하기!

	return 0;
}


polynomial addpoly(polynomial A, polynomial B) {
	polynomial C;
	int A_index = 0, B_index = 0, C_index = 0;
	int A_degree = A.degree, B_degree = B.degree;
	C.degree = max(A.degree, B.degree);
	// C의 차수 = A의 차수와 B의 차수 중 큰 값

	while (A_index <= A.degree && B_index <= B.degree) {
		if (A_degree > B_degree) {
			C.coef[C_index++] = A.coef[A_index++];
			A_degree--;
		}  // A의 차수가 B의 차수보다 크면 A의 계수 입력

		else if (A_degree == B_degree) {
			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
			A_degree--;
			B_degree--;
		}  // A의 차수와 B의 차수가 같으면 A+B의 계수 입력

		else {
			C.coef[C_index++] = B.coef[B_index++];
			B_degree--;
		}  // B의 차수가 A의 차수보다 크면 B의 계수 입력
	}
	return C;
}


void printpoly(polynomial P) {
	int i, degree;
	degree = P.degree;

	for (i = 0; i <= P.degree; i++) {
		printf("%3.0f x^%d", P.coef[i], degree--);
		// 3칸 띄고 출력, .0f는 소수점 첫번째까지 출력
		if (i < P.degree)
			printf("+");
	}
	printf("\n");
}