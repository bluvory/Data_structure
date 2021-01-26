# include <stdio.h>
# include <stdlib.h>
# include <string.h>


// ���� ���� ����Ʈ�� ��� ������ 
typedef struct ListNode {
	struct ListNode* link;
	char data[4];
	struct ListNode* link
}listNode;


// ����Ʈ ������ ��Ÿ���� head ��� ����
typedef struct {
	listNode* head;
}linkedList_h;


// ���� ���� ���� ����Ʈ�� �����ϴ�
linkedList_h* createLinkedList_h(void) {
	linkedList_h* DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));
	DL->head = NULL;
	return DL;
}


void printLIst(linkedList_h* DL) {
	listNode* p;
	printf("DL = (");
	p = DL->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->rlink;
		if (p != NULL) printf(", ");
	}
}


void insertNode(linkedList_h* DL, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	if (DL->head == NULL) {
		newNode->rlink = NULL;
		newNode->llink = NULL;
		DL->head = newNode;
	}
	else {
		newNode->rlink = pre->rlink;
		pre->rlink = newNode;
		newNode->llink = pre;
		if (newNode->rlink != NULL) {
			newNode->rlink->llink = newNode;
		}
	}
}


void deleteNode(linkedList_h* DL, listNode* old) {
	if (DL->head == NULL) return;
	else if (old == NULL) return;
	else {
		old->llink->rlink = old->rlink;
		old->rlink->llink = old->llink;
		free(old);
	}
}



listNode* searchNode(linkedList_h* DL, char* x) {
	listNode* temp;
	temp = DL->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->rlink;
	}
	return temp;
}


void deleteNode(linkedList_h* CL, listNode* old) {
	listNode* pre;
	if (CL->head == NULL) return;
	if (CL->head->link == CL->head) {
		free(CL->head);
		CL->head = NULL;
		return;
	}
	else if (old == NULL) return;
	else {
		pre = CL->head;
		while (pre->link != old) {
			pre = pre->link;
		}
		pre->link = old->link;
		if (old == CL->head)
			CL->head = old->link;
		free(old);
	}
}

