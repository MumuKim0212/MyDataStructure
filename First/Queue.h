#ifndef ___Myqueue
#define ___Myqueue
// ³ëµå
#include "Node.h"

class Intqueue {
	int max;
	int num;
	INODE* start;
	INODE* end;

public:
	Intqueue() :max(100), num(0), start(new INODE), end(start) {
		start->next = end;
	}
	void Enqueue(int x);
	int Dequeue(int* x);
	int Peek(int* x);
	int Capacity();
	int Size();
	int IsEmpty();
	int Search(int x);
	void Print();
	void Terminate();
};

#endif