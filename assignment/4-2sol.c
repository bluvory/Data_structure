// 과제 4-2 실습과제 (하노이탑)

# include <stdio.h>

int count = 0;

void hanoi(int h_count, int start, int middle, int last) {
	if (h_count == 1) {
		count++;
		printf("%d -> %d \n", start, last);
	}
	else {
		hanoi(h_count - 1, start, last, middle);
		count++;
		printf("%d -> %d \n", start, last);
		hanoi(h_count - 1, middle, start, last);
	}
}

int main(void) {
	printf("원판이 5개일 경우 이동 경로\n");
	hanoi(5, 1, 2, 3);
	printf("총 이동 횟수는 : %d", count);
}