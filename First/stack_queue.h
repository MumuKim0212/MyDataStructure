#pragma once

class BaseArray
{
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity);
	~BaseArray();

	void put(int index, int val);
	int get(int index);
	int getCapacity();
};

class MyQueue : public BaseArray
{
	int iLength;
public:
	MyQueue(int capacity);
	~MyQueue() {}

	int capacity();
	int length();
	void enqueue(int data);
	int dequeue();
};

class MyStack : public BaseArray
{
	int iLength;
public:
	MyStack(int capacity);
	~MyStack() {}

	int capacity();
	int length();
	void push(int data);
	int pop();
};
