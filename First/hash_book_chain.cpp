#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 해싱 테이블의 내용을 출력
#define TABLE_SIZE	7	// 해싱 테이블의 크기=소수 
#define SIZE 5

typedef struct {
	int key;
} element;

struct list
{
	element item;
	struct list* link;
};
struct list* hash_table[TABLE_SIZE];
// 제산 함수를 사용한 해싱 함수
int hash_function(int key)
{
	return key % TABLE_SIZE;
}

// 체인법을 이용하여 테이블에 키를 삽입
void hash_chain_add(element item, struct list* ht[])
{
	int hash_value = hash_function(item.key);
	struct list* ptr;
	struct list* node_before = NULL, * node = ht[hash_value];
	for (; node; node_before = node, node = node->link) {
		if (node->item.key == item.key) {
			fprintf(stderr, "이미 탐색키가 저장되어 있음\n");
			return;
		}
	}
	ptr = (struct list*)malloc(sizeof(struct list));
	ptr->item = item;
	ptr->link = NULL;
	if (node_before)
		node_before->link = ptr;
	else
		ht[hash_value] = ptr;
}

// 체인법을 이용하여 테이블에 저장된 키를 탐색
void hash_chain_search(element item, struct list* ht[])
{
	struct list* node;

	int hash_value = hash_function(item.key);
	for (node = ht[hash_value]; node; node = node->link) {
		if (node->item.key == item.key) {
			fprintf(stderr, "탐색 %d 성공 \n", item.key);
			return;
		}
	}
	printf("키를 찾지 못했음\n");
}

void hash_chain_print(struct list* ht[])
{
	struct list* node;
	int i;
	printf("\n===============================\n");
	for (i = 0; i < TABLE_SIZE; i++) {
		printf("[%d]->", i);
		for (node = ht[i]; node; node = node->link) {
			printf("%d->", node->item.key);
		}
		printf("\n");
	}
	printf("===============================\n");
}
void hash_chain_delete(element item, struct list* ht[])
{
	struct list* node;
	int hash_value = hash_function(item.key);
	struct list* node_before = NULL;

	if (ht[hash_value]->item.key == item.key) {		// 첫 노드가 삭제할 노드일때
		ht[hash_value] = ht[hash_value]->link;
		return;
	}
	for (node = ht[hash_value]; node; node_before = node, node = node->link) {
		if (node->item.key == item.key) {
			if (node->link == NULL) {				// 마지막 노드가 삭제할 노드일때
				node_before->link = NULL;
				free(node);
				return;
			}
			else {									// 중간 노드가 삭제할 노드일때
				node_before->link = node->link;
				free(node);
				return;
			}
		}
	}

}
// 해싱 테이블을 사용한 예제 
int main(void)
{
	int data[SIZE] = { 8, 1, 9, 6, 13 };
	element e;

	for (int i = 0; i < SIZE; i++) {
		e.key = data[i];
		hash_chain_add(e, hash_table);
		hash_chain_print(hash_table);
	}
	for (int i = 0; i < SIZE; i++) {
		e.key = data[i];
		hash_chain_search(e, hash_table);
	}
	return 0;
}