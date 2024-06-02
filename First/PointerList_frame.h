#ifndef ___MyPointerList
#define ___MyPointerList
// ���
#include "Node.h"

// ������ ����� ���Ḯ��Ʈ
// �ش� ����� class�� �����, ���ø����� ��ȯ
typedef struct PLIST {
	NODE* head; // �����
	NODE* tail; // ���ϳ��
	int length;
} PList;

// ����Ʈ �ʱ�ȭ
int initialize(PList* list);
// Data x�� �ִ� ��带 �˻�
NODE* search(PList* list, const DATA* x);
void push_front(const DATA* x);
void push_back(const DATA* x);
void pop_front();
void pop_back();
int size();
void remove(int num);
void clear();
void print();
void terminate();

#endif