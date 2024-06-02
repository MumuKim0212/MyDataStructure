#ifndef ___MyArrayList
#define ___MyArrayList
// 노드
#include "Node.h"

// 배열 양방향 연결리스트
// 해당 기능을 class로 만들고, 템플릿으로 전환
typedef struct ALIST {
	NODE* head; // 헤드노드
	NODE* tail; // 테일노드
	int length; // 길이
	int capacity; // 용량
} AList;

// 리스트 초기화
int initialize();
// Data x가 있는 노드를 검색
NODE* search(const DATA* x);
void push_front(const DATA* x);
void push_back(const DATA* x);
void pop_front();
void pop_back();
int size();
int capacity();
void remove(int num);
void clear();
void print();
void terminate();

#endif