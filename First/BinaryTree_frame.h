#ifndef ___MyBinTree
#define ___MyBinTree
// 노드
#include "Node.h"

// 포인터 이진트리
// 크기 제한 없음
// 해당 기능을 class로 만들고, 템플릿으로 전환
typedef struct TREE {
	NODE* root; // 루트노드
	int size;	// 데이터 수
} Tree;

int initialize();				// 리스트 초기화
NODE* inorder(const DATA* x);	// 전위 순회
NODE* preorder(const DATA* x);	// 중위 순회
NODE* postorder(const DATA* x);	// 후위 순회
void push(const DATA* x);		// 데이터 추가
void erase(const NODE* x);		// 지정한 데이터 삭제
int size();						// 사이즈 확인
void print();					// 모든 데이터 출력
void terminate();				// 리스트 삭제

#endif