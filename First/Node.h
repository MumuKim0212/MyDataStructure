#pragma once
typedef struct {
	int no; // 번호
	int data; // 데이터
}DATA;

typedef struct __node {
	DATA data;
	__node* next;
	__node* prev;
}NODE;