#include <iostream>
using namespace std;

int main()
{
	MyList list;
	int n;
	string word;
	for (int i = 1; i <= 10; i++)
	{
		list.push_back(i);
	}
	list.show();
	cout << list.pop() << "\n";
	cout << list.pop() << "\n";
	list.show();
}