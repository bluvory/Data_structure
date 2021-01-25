# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# pragma warning (disable : 4996)


// 단순 연결 리스트의 노드 구조를 구조체로 정의
typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;


// 리스트 시작을 나타내는 head 노드를 구조체로 정의
typedef struct {
	listNode* head;
}linkedList_h;


// 공백 연결 리스트를 생성하는 연산
linkedList_h* createLinkedList_h(void) {
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->head = NULL;   // 공백 리스트이므로 null로 설정
	return L;
}


// 연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(linkedList_h* L) {
	listNode* p;
	while (L->head != NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);  // 메모리 해제하는 free 함수
		p = NULL;
	}
}


// 연결 리스트를 순서대로 출력하는 연산
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


// 첫 번째 노드를 삽입하는 연산
void InsertFirstNode(linkedList_h* L, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = L->head;
	L->head = newNode;
}


// 노드를 pre 뒤에 삽입하는 연산
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


// 마지막 노드로 삽입하는 연산
void InsertLastNode(linkedList_h* L, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	newNode->link = NULL;
	if (L->head == NULL) {
		// 현재 리스트가 공백인 경우
		L->head = newNode;
		// 새 노드를 리스트의 시작 노드로 연결
		return;
	}
	// 현재 리스트가 공백이 아닌 경우
	temp = L->head;
	while (temp->link != NULL) temp = temp->link;
	// 현재 리스트의 마지막 노드를 찾음
	temp->link = newNode;
	// 새 노드를 마지막 노드(temp)의 다음 노드로 연결
}


// 메인함수
int main() {
	linkedList_h* L;
	L = createLinkedList_h();
	printf("(1) 공백 리스트 생성하기! \n");
	printList(L); getchar();

	printf("(2) 리스트에 [수] 노드 삽입하기! \n");
	InsertFirstNode(L, "수");
	printList(L); getchar();

	printf("(3) 리스트에 [금] 노드 삽입하기! \n");
	InsertLastNode(L, "금");
	printList(L); getchar();

	printf("(4) 리스트 첫번째에 [월] 노드 삽입하기! \n");
	InsertLastNode(L, "월");
	printList(L); getchar();

	printf("(5) 리스트 공간을 해제하여 공백 리스트로 만들기!  \n");
	freeLinkedList_h(L);
	printList(L); getchar();
	return 0;
}
