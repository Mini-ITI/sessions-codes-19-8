#include "Stack.h"
#include <assert.h>
template<class T>
int Stack<T>::getSize()
{
	return size;
}
template<class T>
bool Stack<T>::empty()
{
	if (size == 0)
		return true;
	else
		return false;
}
template<class T>
void Stack<T>::push(T value)
{
	Node<T>* newNode = new Node<T>(value);
	newNode->next = head;
	head = newNode;
	size++;
}
template<class T>
void Stack<T>::pop()
{
	assert(size != 0);
	Node<T>* toBeDeleted = head;
	head = head->next;
	delete toBeDeleted;
	size--;
}
template<class T>
T Stack<T>::top()
{
	assert(size != 0);
	return head->value;
}
template<class T>
void Stack<T>::clear()
{
	while (size != 0)
		pop();
}
template<class T>
Stack<T>::Stack():head(nullptr), size(0)
{
}

template<class T>
Stack<T>::~Stack()
{
	clear();
}
