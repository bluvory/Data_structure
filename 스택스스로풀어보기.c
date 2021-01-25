# include <stdio.h>
# include <string.h>
# pragma warning (disable : 4996)

int stack[1000];
int top = -1;

void push(int x) {
	stack[++top] = x;
}

int pop() {
	if (top == -1) return -1;
	--top;
	return stack[top + 1];
}

int size() {
	return (top + 1);
}

int empty() {
	if (top == -1) return 1;
	else return 0;
}

int topp() {
	if (top == -1) return -1;
	return stack[top];
}

int main(void) {
	int i, j, e, n;
	char vps[50];
	scanf("%d", &n);

	for (j = 0; j < n; j++) {
		scanf("%s", vps);
		for (i = 0; vps[i] != '\0'; i++) {
			if (vps[i] == '(') {
				push(1);
			}
			else if (vps[i] == ')') {
				if (top == -1) {
					printf("NO \n");
					--top;
					break;
				}
				else pop();
			}
		}
		if (size() == 0) {
			printf("YES \n");
		}
		else if (size() > 0) printf("NO \n");
		top = -1;
	}
	return 0;
}