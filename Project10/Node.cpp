#include "Node.h"


template <class NODETYPE>
Node<NODETYPE>::Node()
{
}

template <class NODETYPE>
Node<NODETYPE>::Node(NODETYPE& data) : data(data), nextPtr(nullptr)
{
}


template <class NODETYPE>
Node<NODETYPE>::~Node()
{
}

template <class NODETYPE>
NODETYPE Node<NODETYPE>::getData() const
{
	return data;
}

template <class NODETYPE>
void Node<NODETYPE>::setData(const NODETYPE& data)
{
	this->data = data;
}

template <class NODETYPE>
Node<NODETYPE>* Node<NODETYPE>::getNextPtr() const
{
	return nextPtr;
}

template <class NODETYPE>
void Node<NODETYPE>::setNextPtr(Node<NODETYPE>* next_ptr)
{
	nextPtr = next_ptr;
}


//force compile of this templates:
template class Node<int>;
