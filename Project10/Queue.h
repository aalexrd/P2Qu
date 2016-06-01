#pragma once
#ifndef Stack_H
#define Stack_H
#include "Node.h"

template <class NODETYPE>
class Queue
{
public:
	Queue();
	~Queue();
	bool empty() const; // Test whether container is empty
	Node<NODETYPE>* front(); // Access next element
	Node<NODETYPE>* back(); // Access last element
	void push(NODETYPE& item); // Insert element
	void pop(); // Remove next element
	int size() const; // Return size
protected:
	Node<NODETYPE>* frontNode; // The first element of the Queue
	Node<NODETYPE>* rearNode; // The last element of the Queue
	static Node<NODETYPE>* getNewNode(NODETYPE& data);
	int queueSize; // Number of elements
};
#endif
