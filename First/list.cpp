#include <iostream>
#include "list.h"
using namespace std;

MyList::MyList()
{
	begin_node = new MyNode;
	end_node = new MyNode;
	begin_node->n_node = end_node;
	end_node->p_node = begin_node;
	size = 0;
}

void MyList::push_back(int _data)
{
	MyNode* newNode = new MyNode(_data);
	end_node->p_node->n_node = newNode;

	newNode->p_node = end_node->p_node;
	newNode->n_node = end_node;

	end_node->p_node = newNode;
	size++;
}

int MyList::pop()
{
	MyNode* deleteNode = this->end_node->p_node;
	deleteNode->p_node->n_node = this->end_node;
	this->end_node->p_node = deleteNode->p_node;

	int data = deleteNode->data;
	delete deleteNode;
	size--;
	return data;
}

void MyList::show()
{
	cout << "Data size : " << size;
	if (size == 0) return;

	MyNode* thisNode = begin_node;

	cout << "\n----------- \n";
	do {
		thisNode = thisNode->n_node;
		cout << thisNode->data << "\n";
	} while (thisNode->n_node != end_node);
	cout << "----------- \n";
}