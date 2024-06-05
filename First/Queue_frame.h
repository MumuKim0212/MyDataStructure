#ifndef ___Myqueue
#define ___Myqueue
// ���
#include "Node.h"

// int�� ������ ť�� ���. �����ͷ� ����
// ������ �ִ� 100��
// �ش� ����� class�� �����, ���ø����� ��ȯ
typedef struct INTQUEUE {
	int max;	// �뷮
	int num;	// ť ������
	int* que;	// ù ��ҿ� ���� ������
} IntQueue;

int Initialize(int max);	// ť �ʱ�ȭ
int Enqueue(int x);			// ������ ����
int Dequeue(int* x);		// ������ ����
int Peek(int* x);			// ������ Ȯ��
int Capacity();				// �뷮 Ȯ��
int Size();					// ������ Ȯ��
int IsEmpty();				// ����ִ��� Ȯ��
int Search(int x);			// ������ �˻�
void Print();				// ������ ��ü ���
void Terminate();			// ť ����

#endif