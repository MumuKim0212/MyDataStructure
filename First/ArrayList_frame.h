#ifndef ___MyArrayList
#define ___MyArrayList
// ���
#include "Node.h"

// �迭 ���Ḯ��Ʈ(vector)
// ũ�� ���� ����
// �ش� ����� class�� �����, ���ø����� ��ȯ
typedef struct ALIST {
	DATA* head; // �����
	DATA* tail; // ���ϳ��
	int length; // ����
} AList;

int initialize();				// ����Ʈ �ʱ�ȭ
int search(const DATA* x);	// Data x�� �ִ� ��带 �˻�
void push_front(const DATA* x);	// �� �տ� ������ �߰�
void push_back(const DATA* x);	// �� �ڿ� ������ �߰�
void pop_front();				// �� �� ������ ����
void pop_back();				// �� �� ������ ����
void insert(int num);			// ���� ��忡 ������ ����
int size();						// ������ Ȯ��
void erase(int num);			// ���� ��� ����
void print();					// ��� ������ ���
void terminate();				// ����Ʈ ����

#endif