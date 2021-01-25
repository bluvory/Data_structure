#include <stdio.h>

/*

// 배열실습1
int main(void) {

	int i;

	int score[3] = { 91, 86, 74 };  // 크기가 3인 int 형 배열 초기화

	char grade[3] = { 'A', 'B', 'C' };  // 크기가 3인 char 형 배열 초기화

	printf("\n *** 학년별 취득 학점 *** \n\n");

	for (i = 0; i < 3; i++) {
		printf("%d학년 : 총점 = %d 등급 = %c\n", i + 1, score[i], grade[i]);
	}

}




// 배열실습2
#pragma warning (disable : 4996)
int main(void) {
	int i = 0, n;
	int multiply[9];

	printf("1~9의 정수를 입력하세요: ");

	while (1) { // n의 값이 1~9 사이의 숫자만 들어갈 수 있도록 무한루프 설정
		scanf("%d", &n);

		if(n < 0 || n>9) {
			printf("\n 1~9의 정수를 입력하세요: ");
		}
		else {
			break;
		}
	}
	printf("\n");
	for (i = 0; i < 9; i++) {
		multiply[i] = n * (i + 1);           // 계산값을 배열에 저장
		printf("%d * %d = %d \n", n, (i + 1), multiply[i]);
	}
}




// 문자열 실습1
int main(void) {
	char str[20] = "Data Structure!";  //크기가 20인 문자형 배열 선언 및 초기화
	int i;
	printf("\n 문자 배열 str[]: ");

	for (i = 0; str[i]; i++) {    // 조건식은 str의 값이 쓰레기값이 아닐때까지!
		printf("%c", str[i]);
	}
	printf("\n");
}




// 문자열 실습2
#pragma warning (disable : 4996)

int main() {
	int i, length = 0;
	char str[50];  // char 형, 크기가 50인 배열 선언

	printf("\n 문자열을 입력하세요 : ");
	scanf("%s", &str);     // 원하는 문자열을 입력
	printf("\n 입력된 문자열은 \n");

	for (i = 0; str[i]; i++) {   // 문장의 끝에 쓰레기 값이 들어가며, 쓰레기 값에 도달했을 때 반복문을 멈춘다
		printf("%c", str[i]);
		length += 1;
	}

	printf("입니다.");
	printf("\n\n 입력된 문자열의 길이 = %d 입니다. \n", length);

	return 0;
}

*/



