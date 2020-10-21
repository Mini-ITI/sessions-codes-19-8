#pragma once
template <class T>
class Node
{
public:
	Node<T>* left;
	Node<T>* right;
	T value;

	Node(T val);
};


