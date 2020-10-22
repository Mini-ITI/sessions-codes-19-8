#include "Map.h"
template<class keyType, class valueType>
void Map<keyType, valueType>::insert(keyType key, valueType value)
{
	KeyNode<keyType, valueType>* newNode = KeyNode<keyType, valueType>(key, value);
	if (root == nullptr)
	{
		root = newNode;
	}
	else
	{
		KeyNode<keyType, valueType>* currentNode = root;
		while (true)
		{
			if (currentNode->key > newNode->key)
			{
				if (currentNode->left == nullptr)
				{
					currentNode->left = newNode;
					size++;
					return;
				}
				else
				{
					currentNode = currentNode->left;
				}
			}
			else if (currentNode->key < newNode->key)
			{
				if (currentNode->right == nullptr)
				{
					currentNode->right = newNode;
					size++;
					return;
				}
				else
				{
					currentNode = currentNode->right;
				}
			}
			else
			{
				return;
			}
		}
	}
}
template<class keyType, class valueType>
valueType Map<keyType, valueType>::operator[](keyType key)
{

}

template<class keyType, class valueType>
void Map<keyType, valueType>::putIfApsent(keyType key, valueType value)
{
	KeyNode<keyType, valueType>* newNode = KeyNode<keyType, valueType>(key, value);
	KeyNode<keyType, valueType>* currentNode = root;
	while (true)
	{
		if (currentNode->key > newNode->key)
		{
			if (currentNode->left == nullptr)
			{
				currentNode->left = newNode;
				size++;
				return;
			}
			else
			{
				currentNode = currentNode->left;
			}
		}
		else if (currentNode->key < newNode->key)
		{
			if (currentNode->right == nullptr)
			{
				currentNode->right = newNode;
				size++;
				return;
			}
			else
			{
				currentNode = currentNode->right;
			}
		}
		else
		{
			currentNode->value = newNode->value;
			delete newNode;
		}
	}
}
template<class keyType, class valueType>
bool Map<keyType, valueType>::find(keyType key)
{
	if (root == nullptr)
		return false;
	KeyNode<keyType, valueType>* currentNode = root;
	while (true)
	{
		if (currentNode->key < key)
		{
			if (currentNode->right == nullptr)
			{
				return false;
			}
			else {
				currentNode = currentNode->right;
			}
		}
		else if (currentNode->key > key)
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
template<class keyType, class valueType>
Map<keyType, valueType>::Map()
{
	root = nullptr;
	size = 0;
}