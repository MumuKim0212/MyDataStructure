#ifndef ___MyPointerList
#define ___MyPointerList
// ���
#include "Node.h"

// ������ ����� ���Ḯ��Ʈ
// ũ�� ���� ����
// �ش� ����� class�� �����, ���ø����� ��ȯ
typedef struct PLIST {
	NODE* head; // �����
	NODE* tail; // ���ϳ��
	int length;
} PList;

int initialize();				// ����Ʈ �ʱ�ȭ
NODE* search(const DATA* x);	// Data x�� �ִ� ��带 �˻�
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