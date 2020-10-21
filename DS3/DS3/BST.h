#include "Node.h"
#include "Node.cpp"
#pragma once
template <class T>
class BST
{
private:
	Node<T>* root;
	int size;
public:
	void add(T value);
	BST();
};

