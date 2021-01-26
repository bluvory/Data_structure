#include <stdio.h>

void main() {
	int *ptr, i;
	int num[3][2][4] = { {{30, 76, 99, 25}, {45, 17, 55, 92}},
		               { {4, 28, 7, 15}, {19, 83, 21, 11} },
		               { {22, 89, 47, 2}, {3, 9, 68, 44,} } };

	ptr = &num[0][0][0];
	printf("address: %u", ptr);
	return 0;
}

