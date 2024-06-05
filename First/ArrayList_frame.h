#ifndef ___MyArrayList
#define ___MyArrayList
// 노드
#include "Node.h"

// 배열 연결리스트(vector)
// 크기 제한 없음
// 해당 기능을 class로 만들고, 템플릿으로 전환
typedef struct ALIST {
	DATA* head; // 헤드노드
	DATA* tail; // 테일노드
	int length; // 길이
} AList;

int initialize();				// 리스트 초기화
int search(const DATA* x);	// Data x가 있는 노드를 검색
void push_front(const DATA* x);	// 맨 앞에 데이터 추가
void push_back(const DATA* x);	// 맨 뒤에 데이터 추가
void pop_front();				// 맨 앞 데이터 삭제
void pop_back();				// 맨 뒤 데이터 삭제
void insert(int num);			// 지정 노드에 데이터 삽입
int size();						// 사이즈 확인
void erase(int num);			// 지정 노드 삭제
void print();					// 모든 데이터 출력
void terminate();				// 리스트 삭제

#endif