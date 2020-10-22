#include "BST.h"
template<class T>
void BST<T>::add(T value)
{
	Node<T>* newNode = new Node<T>(value);
	if (root == nullptr){
		root = newNode;
	}
	else {
		Node<T>* currentNode = root;
		while (true)
		{
			if (currentNode->value < newNode->value)
			{
				if (currentNode->right == nullptr)
				{
					currentNode->right = newNode;
					size++;
					return;
				}
				else {
					currentNode = currentNode->right;
				}
			}
			else if (currentNode->value > newNode->value)
			{
				if (currentNode->left == nullptr)
				{
					currentNode->left = newNode;
					size++;
					return;
				}
				else {
					currentNode = currentNode->left;
				}
			}
			else {
				return;
			}
		}
	}
}
template<class T>
bool BST<T>::find(T value)
{
	if (root == nullptr)
		return false;
	Node<T>* currentNode = root;
	while (true)
	{
		if (currentNode->value < value)
		{
			if (currentNode->right == nullptr)
			{
				return false;
			}
			else {
				currentNode = currentNode->right;
			}
		}
		else if (currentNode->value > value)
		{
			if (currentNode->left == nullptr)
			{
				return false;
			}
			else {
				currentNode = currentNode->left;
			}
		}
		else {
			return true;
		}
	}
}
template<class T>
BST<T>::BST()
{
	root = nullptr;
	size = 0;
}
