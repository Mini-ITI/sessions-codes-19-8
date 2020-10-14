#include "Node.h"
#include "Node.cpp"
#pragma once
template <class T>
class Stack
{
private:
	Node<T>* head;
	int size;
public:
	int getSize();
	bool empty();
	void push(T value);
	void pop();
	T top();
	void clear();
	Stack();
	~Stack();
};

