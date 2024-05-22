#include<iostream>
#include "stack_queue.h"
using namespace std;
//
//int main()
//{
//	MyQueue mQ(100);
//	int n;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> n;
//		mQ.enqueue(n);
//	}
//	cout << "Capacity : " << mQ.capacity() << " Length : " << mQ.length() << endl;
//
//	while (mQ.length() != 0)
//	{
//		cout << mQ.dequeue() << ' ';
//	}
//	cout << endl <<"Length : " << mQ.length();
//}
int main()
{
	MyStack mStack(100);
	int n;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mStack.push(n);
	}
	cout << "Capacity : " << mStack.capacity() << " Length : " << mStack.length() << endl;

	while (mStack.length() != 0)
	{
		cout << mStack.pop() << ' ';
	}
	cout << endl <<"Length : " << mStack.length();
}