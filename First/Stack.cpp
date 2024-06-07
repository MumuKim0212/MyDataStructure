#include <iostream>
#include "Stack.h"
using namespace std;

void Intstack::Push(int x)
{
	if (ptr == max)
	{
		cout << "용량 초과\n";
		return;
	}
	stk[ptr++] = x;
}

int Intstack::Pop()
{
	if (ptr == 0)
	{
		cout << "데이터 없음\n";
		return 0;
	}
	return stk[--ptr];
}

int Intstack::Peek()
{
	if (ptr == 0)
	{
		cout << "Error\n";
		return 0;
	}
	return stk[ptr - 1];
}

int Intstack::Peek(int x)
{
	if (x < 0)
	{
		cout << "Error\n";
		return 0;
	}
	return stk[x];
}

int Intstack::Capacity()
{
	return max;
}

int Intstack::Size()
{
	return ptr;
}

int Intstack::Isempty()
{
	if (ptr == 0)
		return 1;
	return 0;
}

int Intstack::Search(int x)
{
	for (int i = 0; i < ptr; i++)
		if (stk[i] == x)
			return stk[i];
	return -1;
}

void Intstack::Print()
{
	for (int i = 0; i < ptr; i++)
		cout << stk[i] << ' ';
}

void Intstack::Terminate()
{
	delete[] stk;
	stk = nullptr;
}

