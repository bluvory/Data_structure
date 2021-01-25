#include <stdio.h>
#include <string.h>


/*
// 구조체 생성 실습1
struct employee {   // employee라는 구조체 형성
	char name[10];
	int year;
	int pay;
};

int main() {
	int i;
	struct employee Lee[4] = {     // 앞서 생성했던 employee라는 구조체에 name, year, pay 순으로 입력
		{"이진호", 2014, 4200},
		{"이한영", 2015, 3500},
		{"이상원", 2015, 3500},
		{"이상범", 2016, 2900}

	};
	
	for (i = 0; i < 4; i++) {         // 반복문을 통해 배열안에 내용들이 잘 들어가있나 확인
		printf("\n 이름 : %s", Lee[i].name);
		printf("\n 입사 : %d", Lee[i].year);
		printf("\n 연봉 : %d", Lee[i].pay);
	}
	return 0;
}
*/




// 구조체 생성 실습2
struct book {
	char title[30];
	char author[30];
	int price;
};

int main(void) {
	struct book my_book = { "HTML과 CSS", "홍길동", 28000 };
	struct book c_book = { "C로 배우는 쉬운 자료구조기초", "이지영", 27000 };

	printf("첫 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n",
		my_book.title, my_book.author, my_book.price);
	printf("두 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n",
		c_book.title, c_book.author, c_book.price);

	return 0;
}

