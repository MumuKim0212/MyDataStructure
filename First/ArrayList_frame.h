#ifndef ___MyArrayList
#define ___MyArrayList
// ���
#include "Node.h"

// �迭 ����� ���Ḯ��Ʈ
// �ش� ����� class�� �����, ���ø����� ��ȯ
typedef struct ALIST {
	NODE* head; // �����
	NODE* tail; // ���ϳ��
	int length; // ����
	int capacity; // �뷮
} AList;

// ����Ʈ �ʱ�ȭ
int initialize();
// Data x�� �ִ� ��带 �˻�
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