#ifndef ___MyGraph
#define ___MyBinSTree
// 노드
#include "Node.h"

// 포인터 이진탐색트리
// 크기 제한 없음
// 해당 기능을 class로 만들고, 템플릿으로 전환
typedef struct BSTREE {
	NODE* root; // 루트노드
	int size;	// 데이터 수
} BSTree;

int initialize();			// 리스트 초기화
NODE* search(int key);		// 데이터 탐색
void push(const DATA* x);	// 데이터 추가
void erase(const NODE* x);	// 지정한 데이터 삭제
int size();					// 사이즈 확인
void print();				// 모든 데이터 출력
void terminate();			// 리스트 삭제

#endif