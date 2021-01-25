# include <stdio.h>
# include <stdlib.h>
# define STACK_SIZE 100

typedef int element;   // ���ÿ����� �ڷ����� int�� ����

element stack[STACK_SIZE];   // 1���� �迭 ���� ����
int top = -1;     // top �ʱ�ȭ

// ������ ���� �������� Ȯ���ϴ� ����
int isEmpty() {
	if (top == -1) return 1;
	else return 0;
}

// ������ ��ȭ �������� Ȯ���ϴ� ����
int isFull() {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

// ������ top�� ���Ҹ� �����ϴ� ����
void push(element item) {
	if (isFull()) {    // ������ ��ȭ ������ ���
		printf("\n\n Stack is FULL! \n");
		return;
	}
	else stack[++top] = item;    // top�� ������Ų �� ���� top�� ���� ����
}

// ������ top���� ���Ҹ� �����ϴ� ����
element pop() {
	if (isEmpty()) {
		printf("\n\n Stack is Empty!!\n");
		return 0;
	}
	else return stack[top--];
}

// ������ ��ȣ�� �˻��ϴ� ����
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
		printf("\n\n ������ ��ȣ�� �°� ���Ǿ����ϴ�!\n");
	else
		printf("\n\n ������ ��ȣ�� Ʋ�Ƚ��ϴ�\n");
}