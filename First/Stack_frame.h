#ifndef ___Mystack
#define ___Mystack

// int�� ������ ���. �迭�� ����
// ������ �ִ� 100��
// �ش� ����� class�� �����, ���ø����� ��ȯ
typedef struct INTSTACK {
	int max;	// �뷮
	int num;	// ���� ������
	int* stk;	// ù ��ҿ� ���� ������
} IntStack;

int Initialize(int max);	// ���� �ʱ�ȭ
int Push(int x);			// ������ ����
int Pop();					// ������ ����
int Peek(int* x);			// ������ Ȯ��
int Capacity();				// �뷮 Ȯ��
int Size();					// ������ Ȯ��
int IsEmpty();				// ����ִ��� Ȯ��
int Search(int x);			// ������ �˻�
void Print();				// ������ ��ü ���
void Terminate();			// ���� ����

#endif