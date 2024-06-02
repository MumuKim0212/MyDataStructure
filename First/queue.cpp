
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

