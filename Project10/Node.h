#pragma once
#ifndef Node_H
#define Node_H

template <class NODETYPE>
class Node
{
public:
	Node();
	Node(NODETYPE& data);
	~Node();
	NODETYPE getData() const;
	void setData(const NODETYPE& data);
	Node<NODETYPE>* getNextPtr() const;
	void setNextPtr(Node<NODETYPE>* next_ptr);
protected:
	NODETYPE data;
	Node<NODETYPE>* nextPtr;
};
#endif
