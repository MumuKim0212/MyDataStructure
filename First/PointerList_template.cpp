#include <iostream>
using namespace std;

template<typename T>
class MyNode
{
	T data;
	MyNode* n_node;
	MyNode* p_node;
public:
	MyNode() : MyNode(0) {}
	MyNode(T _data) : data(_data), n_node(nullptr), p_node(nullptr) {}
};

template<typename T>
class MyList
{
	int size;
	MyNode<T>* begin_node;
	MyNode<T>* end_node;
public:
	MyList()
		:begin_node(new MyNode<T>),
		end_node(new MyNode<T>)
	{
		begin_node->n_node = end_node;
		end_node->p_node = begin_node;
		size = 0;
	}
	~MyList()
	{
	}
public:
	void push_back(T _data)
	{
		MyNode<T>* newNode = new MyNode<T>(_data);
		end_node->p_node->n_node = newNode;

		newNode->p_node = end_node->p_node;
		newNode->n_node = end_node;

		end_node->p_node = newNode;
		size++;
	}
	T pop()
	{
		MyNode* deleteNode(this->end_node->p_node);
		deleteNode->n_node = this->end_node;
		this->end_node->p_node = deleteNode->p_node;

		T data = deleteNode->data;
		delete deleteNode;
		size--;
		return data;
	}
};
int main()
{
	MyList<int> list;
	int n;
	string word;
	for (int i = 1; i <= 10; i++)
	{
		list.push_back(i);
	}
	cout << list.pop() << "\n";
	cout << list.pop() << "\n";
}