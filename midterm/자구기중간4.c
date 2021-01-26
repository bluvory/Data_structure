#include <stdio.h>

int main(void) {
	char string1[30] = "I Love data structure!";
	char* ptr1;
	ptr1 = string1;
	
	for (int i = 21; i >= 0; i--) {
		printf("%c", *(ptr1 + i));
	}

	return 0;
}
