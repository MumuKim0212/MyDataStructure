#ifndef ___MyBinTree
#define ___MyBinTree
// ���
#include "Node.h"

// ������ ����Ʈ��
// ũ�� ���� ����
// �ش� ����� class�� �����, ���ø����� ��ȯ
typedef struct TREE {
	NODE* root; // ��Ʈ���
	int size;	// ������ ��
} Tree;

int initialize();				// ����Ʈ �ʱ�ȭ
NODE* inorder(const DATA* x);	// ���� ��ȸ
NODE* preorder(const DATA* x);	// ���� ��ȸ
NODE* postorder(const DATA* x);	// ���� ��ȸ
void push(const DATA* x);		// ������ �߰�
void erase(const NODE* x);		// ������ ������ ����
int size();						// ������ Ȯ��
void print();					// ��� ������ ���
void terminate();				// ����Ʈ ����

#endif