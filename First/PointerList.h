#pragma once

class MyNode
{
	int data;
	MyNode* n_node;
	MyNode* p_node;
	friend class MyList;
protected:
	MyNode() : MyNode(0) {}
	MyNode(int _data) : data(_data), n_node(nullptr), p_node(nullptr) {}
};

class MyList
{
	int size;
	MyNode* begin_node;
	MyNode* end_node;
public:
	MyList();
	~MyList(){}
public:
	void push_back(int _data);
	int pop();
	void show();
};