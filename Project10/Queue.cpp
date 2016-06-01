#include "Queue.h"


template <class NODETYPE>
Queue<NODETYPE>::Queue() : frontNode(nullptr), rearNode(nullptr), queueSize(0)
{
}

template <class NODETYPE>
Queue<NODETYPE>::~Queue()
{
	if (!empty())
	{
		Node<NODETYPE> *actualPtr = frontNode, *tempPtr;
		while (actualPtr)
		{
			tempPtr = actualPtr;
			actualPtr = actualPtr->getNextPtr();
			delete tempPtr;
		}
	}
}

template <class NODETYPE>
bool Queue<NODETYPE>::empty() const
{
	return frontNode == nullptr;
}

template <class NODETYPE>
Node<NODETYPE>* Queue<NODETYPE>::front()
{
	Node<NODETYPE>* newPtr = new Node<NODETYPE>;
	char* csrc = reinterpret_cast<char *>(frontNode);
	char* cdest = reinterpret_cast<char *>(newPtr);
	for (int i = 0; i < sizeof(frontNode); i++)
		cdest[i] = csrc[i];
	pop();
	return newPtr;
}

template <class NODETYPE>
Node<NODETYPE>* Queue<NODETYPE>::back()
{
	return rearNode;
}

template <class NODETYPE>
void Queue<NODETYPE>::push(NODETYPE& item)
{
	Node<NODETYPE>* newPtr = getNewNode(item);
	if (empty())
		frontNode = rearNode = newPtr;
	else
	{
		rearNode->setNextPtr(newPtr);
		rearNode = newPtr;
	}
	++queueSize;
}

template <class NODETYPE>
void Queue<NODETYPE>::pop()
{
	if (empty())
		return;
	Node<NODETYPE>* temp = frontNode;
	frontNode = frontNode->getNextPtr();
	delete temp;
	--queueSize;
	if (queueSize == 0)
		frontNode = nullptr;
}

template <class NODETYPE>
int Queue<NODETYPE>::size() const
{
	return queueSize;
}

template <class NODETYPE>
Node<NODETYPE>* Queue<NODETYPE>::getNewNode(NODETYPE& data)
{
	return new Node<NODETYPE>(data);
}

//force compile of this templates:
template class Queue<int>;
