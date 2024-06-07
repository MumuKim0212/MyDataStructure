#ifndef ___Mystack
#define ___Mystack

class Intstack {
	int max;	// 용량
	int ptr;	// 스택 포인터
	int* stk;	// 첫 요소에 대한 포인터

public:
	Intstack() :max(100), ptr(0), stk(new int[100]) {};
	void Push(int x);
	int Pop();
	int Peek();
	int Peek(int x);
	int Capacity();
	int Size();
	int Isempty();
	int Search(int x);
	void Print();
	void Terminate();
};

#endif