#pragma once
typedef struct {
	int no; // ��ȣ
	int data; // ������
}DATA;

typedef struct __node {
	DATA data;
	__node* next;
	__node* prev;
}NODE;