# include <stdio.h>
# include <stdlib.h>
# define STACK_SIZE 100

typedef int element;   // 스택원소의 자료형을 int로 정의

element stack[STACK_SIZE];   // 1차원 배열 스택 선언
int top = -1;     // top 초기화

// 스택이 공백 상태인지 확인하는 연산
int isEmpty() {
	if (top == -1) return 1;
	else return 0;
}

// 스택이 포화 상태인지 확인하는 연산
int isFull() {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

// 스택의 top에 원소를 삽입하는 연산
void push(element item) {
	if (isFull()) {    // 스택이 포화 상태인 경우
		printf("\n\n Stack is FULL! \n");
		return;
	}
	else stack[++top] = item;    // top을 증가시킨 후 현재 top에 원소 삽입
}

// 스택의 top에서 원소를 삭제하는 연산
element pop() {
	if (isEmpty()) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return stack[top--];
}

// 수식의 괄호를 검사하는 연산
int testPair(char* exp) {
	char symbol, open_pair;
	int i, length = strlen(exp);
	top = NULL;

	for (i = 0; i < length; i++) {
		symbol = exp[i];
		switch (symbol) {
		case '(':
		case '[':
		case '{':
			push(symbol); break;
		case ')':
		case ']':
		case '}':
			if (top == NULL) return 0;
			else {
				open_pair = pop();
				if ((open_pair == '(' && symbol != ')') ||
					(open_pair == '[' && symbol != ']') ||
					(open_pair == '{' && symbol != '}'))
					return 0;
				else break;
			}
		}
	}
	if (top == NULL) return 1;
	else return 0;
}

void main(void) {
	char* express = "{(A+B)-3}*5 + [{cos(x+y)+7}-1]*4";
	printf("%s", express);

	if (testPair(express) == 1)
		printf("\n\n 수식의 괄호가 맞게 사용되었씁니다!\n");
	else
		printf("\n\n 수삭의 괄호가 틀렸습니다\n");
}