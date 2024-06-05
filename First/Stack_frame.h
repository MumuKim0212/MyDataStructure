#ifndef ___Mystack
#define ___Mystack

// int형 스택의 기능. 배열로 구현
// 데이터 최대 100개
// 해당 기능을 class로 만들고, 템플릿으로 전환
typedef struct INTSTACK {
	int max;	// 용량
	int num;	// 스택 포인터
	int* stk;	// 첫 요소에 대한 포인터
} IntStack;

int Initialize(int max);	// 스택 초기화
int Push(int x);			// 데이터 삽입
int Pop();					// 데이터 추출
int Peek(int* x);			// 데이터 확인
int Capacity();				// 용량 확인
int Size();					// 사이즈 확인
int IsEmpty();				// 비어있는지 확인
int Search(int x);			// 데이터 검색
void Print();				// 데이터 전체 출력
void Terminate();			// 스택 삭제

#endif