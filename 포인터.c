#include <stdio.h>

// �Ϲݺ����� �����ͺ����־ ���� ���������� ��
/*
//�����͹迭 �ǽ�
int main(void) {
	int i;
	char *ptrArray[4] =
	{ {"Korea"}, {"Seoul"}, {"Mapo"}, {"152���� 2/3"} };

	for (i = 0; i < 4; i++) {
		printf("\n %s", ptrArray[i]);
	}

	ptrArray[2] = "Jongro";
	printf("\n\n");

	for (i = 0; i < 4; i++) {
		printf("\n %s", ptrArray[i]);
	}
}





// �����͸� Ȱ���Ͽ� ���ڿ� ó���ϱ�

int main(void) {
	int i;
	char string1[20] = "Dreams come true!";
	char string2[20];
	char* ptr1, * ptr2;

	ptr1 = string1;
	printf("\n string1�� �ּ� = %d, ptr1 = %d", string1, ptr1);
	printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);
	printf("\n\n %s", ptr1 + 7);   // 7��°���� ����� �ϰڴ�(come true!)
	
	ptr2 = &string1[7];   // string1�� 7��°���� ������ �ϰڴ�
	printf("\n %s \n\n", ptr2);

	for (i = 16; i >= 0; i--) {
		printf("%c", *(ptr1 + i));
	}

	for (i = 0; i < 20; i++) {
		string2[i] = *(ptr1+i);
	}

	printf("\n\n string1 = %s", string1);
	printf("\n string2 = %s", string2);

	*ptr1 = 'P';
	*(ptr1 + 1) = 'e';
	*(ptr1 + 2) = 'a';
	*(ptr1 + 3) = 'c';
	*(ptr1 + 4) = 'e';
	printf("\n\n string1 = %s\n", string1);

	return 0;	
}

*/



// ������ Ǯ�����
int main(void) {
	int i;
	char string1[30] = "I Love C programming!";
	char string2[30];
	char *ptr1, *ptr2;

	ptr1 = string1;
	printf("\n string1�� �ּ� = %d, ptr1 = %d", string1, ptr1);
	printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);
	printf("\n\n %s", ptr1 + 7);

	ptr2 = &string1[7];
	printf("\n %s \n\n", ptr2);

	for (i = 20; i >= 0; i--) {
		printf("%c", *(ptr1 + i));
	}

	for (i = 0; i < 30; i++) {
		string2[i] = *(ptr1 + i);
	}

	printf("\n\n string1 = %s", string1);
	printf("\n string2 = %s", string2);

	*(ptr1 + 3) = 'i';
	*(ptr1 + 4) = 'k';
	*(ptr1 + 5) = 'e';
	printf("\n\n string1 = %s\n", string1);

	return 0;
}
