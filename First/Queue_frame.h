#ifndef ___Myqueue
#define ___Myqueue

// int�� ������ ť�� ���
// �ش� ����� class�� �����, ���ø����� ��ȯ
typedef struct INTQUEUE {
	int max;	// �뷮
	int num;	// ���� ��� ����
	int front;	// begin ��ġ
	int rear;	// end ��ġ
	int* que;	// ù ��ҿ� ���� ������
} IntQueue;

// ť �ʱ�ȭ
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