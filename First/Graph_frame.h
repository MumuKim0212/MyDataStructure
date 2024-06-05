#ifndef ___MyGraph
#define ___MyBinSTree
// ���
#include "Node.h"

// ������ ����Ž��Ʈ��
// ũ�� ���� ����
// �ش� ����� class�� �����, ���ø����� ��ȯ
typedef struct BSTREE {
	NODE* root; // ��Ʈ���
	int size;	// ������ ��
} BSTree;

int initialize();			// ����Ʈ �ʱ�ȭ
NODE* search(int key);		// ������ Ž��
void push(const DATA* x);	// ������ �߰�
void erase(const NODE* x);	// ������ ������ ����
int size();					// ������ Ȯ��
void print();				// ��� ������ ���
void terminate();			// ����Ʈ ����

#endif