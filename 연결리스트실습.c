# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# pragma warning (disable : 4996)


// �ܼ� ���� ����Ʈ�� ��� ������ ����ü�� ����
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;


// ����Ʈ ������ ��Ÿ���� head ��带 ����ü�� ����
typedef struct {
	listNode* head;
}linkedList_h;


// ���� ���� ����Ʈ�� �����ϴ� ����
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;   // ���� ����Ʈ�̹Ƿ� null�� ����
	return L;
}


// ���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
void freeLinkedList_h(linkedList_h* L) {
	listNode* p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);  // �޸� �����ϴ� free �Լ�
		p = NULL;
	}
}


// ���� ����Ʈ�� ������� ����ϴ� ����
void printList(linkedList_h* L) {
	listNode* p;
	printf("L=(");
	p = L->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL) printf(", ");
	}
	printf(") \n");
}


// ù ��° ��带 �����ϴ� ����
void InsertFirstNode(linkedList_h* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = L->head;
	L->head = newNode;
}


// ��带 pre �ڿ� �����ϴ� ����
void InsertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (L == NULL) {
		newNode->link = NULL;
		L->head = newNode;
	}
	else if (pre == NULL) {
		L->head = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}


// ������ ���� �����ϴ� ����
void InsertLastNode(linkedList_h* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	newNode->link = NULL;
	if (L->head == NULL) {
		// ���� ����Ʈ�� ������ ���
		L->head = newNode;
		// �� ��带 ����Ʈ�� ���� ���� ����
		return;
	}
	// ���� ����Ʈ�� ������ �ƴ� ���
	temp = L->head;
	while (temp->link != NULL) temp = temp->link;
	// ���� ����Ʈ�� ������ ��带 ã��
	temp->link = newNode;
	// �� ��带 ������ ���(temp)�� ���� ���� ����
}


// �����Լ�
int main() {
	linkedList_h* L;
	L = createLinkedList_h();
	printf("(1) ���� ����Ʈ �����ϱ�! \n");
	printList(L); getchar();

	printf("(2) ����Ʈ�� [��] ��� �����ϱ�! \n");
	InsertFirstNode(L, "��");
	printList(L); getchar();

	printf("(3) ����Ʈ�� [��] ��� �����ϱ�! \n");
	InsertLastNode(L, "��");
	printList(L); getchar();

	printf("(4) ����Ʈ ù��°�� [��] ��� �����ϱ�! \n");
	InsertLastNode(L, "��");
	printList(L); getchar();

	printf("(5) ����Ʈ ������ �����Ͽ� ���� ����Ʈ�� �����!  \n");
	freeLinkedList_h(L);
	printList(L); getchar();
	return 0;
}
