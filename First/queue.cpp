#include "Queue.h"
#include <iostream>
using namespace std;

void Intqueue::Enqueue(int x)
{
	if (num == max)
	{
		cout << "�뷮 �ʰ�\n";
		return;
	}
	end->data = x;
	INODE* tmp(new INODE);
	end->next = tmp;
	tmp->next = end;
	end = tmp;
}

int Intqueue::Dequeue(int* x)
{

	return 0;
}
