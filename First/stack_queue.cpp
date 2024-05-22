#include <iostream>
#include "stack_queue.h"
using namespace std;

BaseArray::BaseArray(int capacity = 100)
{
	this->capacity = capacity;
	mem = new int[capacity];
}

BaseArray::~BaseArray() { delete[] mem; }

void BaseArray::put(int index, int val) { mem[index] = val; }

int BaseArray::get(int index) { return mem[index]; }

int BaseArray::getCapacity() { return capacity; }


// Queue

MyQueue::MyQueue(int capacity) : BaseArray(capacity) { iLength = 0; }

int MyQueue::capacity() { return this->getCapacity(); }

int MyQueue::length() { return iLength; }

void MyQueue::enqueue(int data)
{
	if (iLength >= capacity())
	{
		cout << "용량 초과" << endl;
		return;
	}
	put(iLength, data);
	iLength++;
}

int MyQueue::dequeue()
{
	if (!iLength) { return 0; }
	int tmp = get(0);
	for (int i = 0; i < iLength - 1; i++) {
		put(i, get(i + 1));
	}
	iLength--;

	return tmp;
}


// Stack

MyStack::MyStack(int capacity) : BaseArray(capacity) { iLength = 0; }

int MyStack::capacity(){ return this->getCapacity(); }

int MyStack::length(){ return iLength; }

void MyStack::push(int data)
{
	if (iLength >= capacity())
	{
		cout << "용량 초과" << endl;
		return;
	}
	put(iLength, data);
	iLength++;
}

int MyStack::pop()
{
	if (!iLength) { return 0; }
	return get(--iLength);
}
