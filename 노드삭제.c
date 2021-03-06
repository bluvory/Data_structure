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
	L->head = NULL; // 공백 리스트이므로 null로 설정
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


// 리스트에서 노드 p를 삭제하는 연산
void deleteNode(linkedList_h* L, listNode* p) {
	listNode* pre;   // 삭제할 노드의 선행자 노드를 나타낼 포인터
	if (L->head == NULL) return;    // 공백 리스트라면 삭제 연산 중단
	if (L ->head->link == NULL) {   // 리스트에 노드가 한개만 있는 경우
		free(L->head);   // 첫 번재 노드를 메모리에서 해제
		L->head = NULL;   // 리스트 시작 포인터를 NULL로 설정
		return;
	}
	else if (p == NULL) return;  // 삭제할 노드가 없다면 삭제 연산 중단
	else {   // 삭제할 노드 p의 선행자 노드를 포인터 pre를 이용해 찾음
		pre = L->head;
		while (pre->link != p) {
			pre = pre->link;

		}
		pre->link = p->link;
		// 삭제할 노드 p의 선행자 노드와 다음 노드를 연결
		free(p);  // 삭제 노드의 메모리해제
	}
}


// 메인함수
int main() {
	linkedList_h* L;
	listNode* p;
	L = createLinkedLIst_h();  // 공백 리스트 생성
	printf("(1) 리스트에 [월], [수], [일] 노드 삽입하기! \n");
	InsertLastNode(L, "월");
	InsertLastNode(L, "수");
	InsertLastNode(L, "일");
	prinList(L); gerchar();

	printf("(2) 리스트에서 [수] 노드 탐색하기! \n");
	p = searchNode(L, "수");
	if (p == NULL) print("찾는 데이터가 없습니다 \n");
	else printf("(%s)를 찾았습니다 \n", p->data);
	getchar();

	printf("(3) 리스트에서 (수) 뒤에 (금) 노드 삽입하기! \n");
	InsertMiddleNode(L, p, "금");
	printList(L); getchar();

	printf("(4) 리스트에서 (일) 노드 삭제하기! \n");
	p = searchNode(L, "일");
	// 삭제할 노드 위치 p를 찾음
	deleteNode(L, p);
	// 포인터 p 노드 삭제
	printList(L); getchar();

	freeLinkedList_h(L);
	getchar();

	return 0;
}
