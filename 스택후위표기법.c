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


element evalPostfix(char* exp) {
	int opr1, opr2, value, i = 0;
	// char 형 포인터 매개변수로 받은 수식 exp의 길이를 계산하여 length 변수에 저장
	int length = strlen(exp);
	char symbol;
	top = NULL;

	for (i = 0; i < length; i++) {
		symbol = exp[i];
		if (symbol != '+' && symbol != '-' &&
			symbol != '*' && symbol != '/') {
			value = symbol - '0';
			push(value);
		}

		else {
			opr2 = pop();
			opr1 = pop();
			// 변수 opr1과 opr2에 대해 symbol에 저장된 연산자를 여산
			switch (symbol) {
			case '+': push(opr1 + opr2); break;
			case '-': push(opr1 - opr2); break;
			case '*': push(opr1 * opr2); break;
			case '/': push(opr1 / opr2); break;
			}
		}
	}
	return pop();
}


int main(void) {
	int result;
	char* express = "823*-42/+";
	printf("후위 표기식 %s", express);
	result = evalPostfix(express);
	printf("\n\n 연산결과 => %d", result);
}