#ifndef ___MyPointerList
#define ___MyPointerList
// 노드
#include "Node.h"

// 포인터 양방향 연결리스트
// 해당 기능을 class로 만들고, 템플릿으로 전환
typedef struct PLIST {
	NODE* head; // 헤드노드
	NODE* tail; // 테일노드
	int length;
} PList;

// 리스트 초기화
int initialize(PList* list);
// Data x가 있는 노드를 검색
NODE* search(PList* list, const DATA* x);
void push_front(const DATA* x);
void push_back(const DATA* x);
void pop_front();
void pop_back();
int size();
void remove(int num);
void clear();
void print();
void terminate();

#endif