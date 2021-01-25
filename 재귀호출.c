#include <stdio.h>
#pragma warning (disable : 4996)


/*
// 재귀호출 실습1

long int fact(int);
// 절차지향언어의 특성상 메인함수보다 아래에 함수를 생성 할 경우, 함수를 실행하지 않고 종료

int main() {
	int n, result;
	printf("\n 정수를 입력하세요 : ");
	scanf("%d", &n);

	result = fact(n);

	printf("\n\n %d의 팩토리얼 값은 %d입니다. \n", n, result);

	return 0;
}

long int fact(int n) {
	// 연산 값이 커질 수 있으므로 int보다 표현 값이 더 큰 long int 자료형을 사용

	int value;

	if (n <= 1) {   // n이 1이 될때까지 if문은 건너뛴다
		printf("\n fact(1) 함수 호출! ");
		printf("\n fact(1) 값 1 반환");
		return 1;
	}
	else {  // n이 2 이상일 경우 else 문으로 들어와 다시 fact 함수를 호출한다
		printf("\n fact(%d) 함수 호출!", n);
		value = (n * fact(n - 1));
		printf("\n fact(%d) 값 %d 반환!", n, value);
		return value;
	}
}




// 재귀호출 실습2

int recursion(int finish, int start) {
	// finish는 num의 값을 받는 매개변수, start는 최초0의 값으로 설정된 매개변수

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
	printf("별산의 높이를 입력하여주세요! : ");
	scanf("%d", &num);
	recursion(num, 1);
	// num은 원하는 높이, 최초높이는 0으로 설정

}





// 스스로 풀어보세요1

int fact(int a, int b) {
	if (b > 9) {
		return 0;
	}

	else {
		printf("%d x %d = %d 입니다. \n", a, b, a * b);
		return fact(a, b + 1);
	}
}


int main(void) {
	int n;
	printf("몇단을 만드시겠습니까? : ");
	scanf("%d", &n);
	fact(n, 1);

}




// 스스로 풀어보세요2

int sigma(int a, int sum) {

	if (a == 0) {
		return sum;
	}
	// 매개변수 a가 0이 되기전까지 모든 수를 더할 수 있도록 예외처리
	else {
		return sigma(a - 1, sum + a);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("1부터 %d까지의 합은 %d입니다. \n", n, sigma(n, 0));
}

*/


// 스스로 풀어보세요3
int recursion(int finish, int start) {
	// finish는 num의 값을 받는 매개변수, start는 최초0의 값으로 설정된 매개변수

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
	printf("별산의 높이를 입력하여주세요! : ");
	scanf("%d", &num);
	recursion(1, num);
	// num은 원하는 높이, 최초높이는 0으로 설정

}