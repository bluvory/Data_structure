# include <stdio.h>

/*
// 2���� �迭�ǽ�

int main() {
	int i, n = 0, * ptr;
	int sale[2][4] = { {63,84,140,130}, {157,209,251,312} };

	ptr = &sale[0][0];

	for (i = 0; i < 8; i++) {
		printf("\n address : %u sale %d = %d", ptr, i, *ptr);
		ptr++;  // (ptr+1)
	}
	printf("\n");
	return 0;
}



// 3���� �迭 �ǽ�

int main() {
	int i, n = 0, * ptr;
	int sale[2][2][4] = { {{63,84,140,130}, {157,209,251,312}}, 
		{ {59,80,130,135}, {149,187,239,301}} };
	// 3���� �迭 ���� �� �ʱ�ȭ

	ptr = &sale[0][0][0];

	for (i = 0; i < 16; i++) {
		printf("\n address:%u sale %d=%d", ptr, i, *ptr);
		ptr++;
	}
	printf("\n");
	return 0;
}
*/


// �迭�� ����, ������ ����
void main() {
	int i, n = 0, * ptr;
	int sale[2][4] = { {63,84,140,130},{157,209,251,312} };

	ptr = &sale[0][0];
	for (i = 0; i < 8; i++) {
		printf("\n address : %u sale %d = %d", ptr, i, *ptr);
		ptr++;
	}
}