#ifndef ___Myqueue
#define ___Myqueue

// int형 링버퍼 큐의 기능
// 해당 기능을 class로 만들고, 템플릿으로 전환
typedef struct INTQUEUE {
	int max;	// 용량
	int num;	// 현재 요소 개수
	int front;	// begin 위치
	int rear;	// end 위치
	int* que;	// 첫 요소에 대한 포인터
} IntQueue;

// 큐 초기화
int Initialize(IntQueue* q, int max);
int Enqueue(IntQueue* q, int x);
int Dequeue(IntQueue* q, int* x);
int Peek(const IntQueue* q, int* x);
void Clear(IntQueue* q);
int Capacity(const IntQueue* q);
int Size(const IntQueue* q);
int IsEmpty(const IntQueue* q);
int IsFull(const IntQueue* q);
int Search(const IntQueue* q, int x);
void Print(const IntQueue* q);
void Terminate(IntQueue* q);

#endif