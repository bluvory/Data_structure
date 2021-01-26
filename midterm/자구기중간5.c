# include <stdio.h>

struct point {
	int xpos;
	int ypos;
};

int main(void) {
	struct point pos1 = { 2,3 };
	struct point pos2 = { 5,6 };
	struct point* pptr = &pos1;

	(*pptr).xpos += 4;

	pptr = &pos2;
	pptr->ypos -= 5;

	int inner = (pos1.xpos * pos2.xpos) + (pos1.ypos * pos2.ypos);
	printf("두 점의 내적은 %d입니다", inner);
	return 0;

}

