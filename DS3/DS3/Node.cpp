#include "Node.h"
template<class T>
Node<T>::Node(T val)
{
	value = val;
	left = nullptr;
	right = nullptr;
}