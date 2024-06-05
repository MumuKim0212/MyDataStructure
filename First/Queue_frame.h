#ifndef ___Myqueue
#define ___Myqueue
// 노드
#include "Node.h"

// int형 링버퍼 큐의 기능. 포인터로 구현
// 데이터 최대 100개
// 해당 기능을 class로 만들고, 템플릿으로 전환
typedef struct INTQUEUE {
	int max;	// 용량
	int num;	// 큐 포인터
	int* que;	// 첫 요소에 대한 포인터
} IntQueue;

int Initialize(int max);	// 큐 초기화
int Enqueue(int x);			// 데이터 삽입
int Dequeue(int* x);		// 데이터 추출
int Peek(int* x);			// 데이터 확인
int Capacity();				// 용량 확인
int Size();					// 사이즈 확인
int IsEmpty();				// 비어있는지 확인
int Search(int x);			// 데이터 검색
void Print();				// 데이터 전체 출력
void Terminate();			// 큐 삭제

#endif