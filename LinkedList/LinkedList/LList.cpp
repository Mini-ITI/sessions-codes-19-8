#include "LList.h"
#include <iostream>
#include <assert.h>
using namespace std;
int LList::getSize()
{
	return size;
}

void LList::append(int val)
{
	Node* newNode = new Node(val);
	if (head == nullptr)
	{
		head = newNode;
	}
	else 
	{
		Node* tmp = head;
		while (tmp->next != nullptr)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
	}
	size++;
}

void LList::print()
{
	Node* tmp = head;
	cout << "The list is:" << endl;
	while (tmp != nullptr)
	{
		cout << tmp->value << ' ';
		tmp = tmp->next;
	}
	cout << endl;
}

bool LList::find(int val)
{
	Node* tmp = head;
	while (tmp != nullptr)
	{
		if (tmp->value == val)
			return true;
		tmp = tmp->next;
	}

	return false;
}

void LList::insertAt(int index, int val)
{
	assert(index >= 0 && index <= size);
	Node* newNode = new Node(val);
	if (index == 0)
	{
		newNode->next = head;
		head = newNode;
	}
	else
	{
		Node* tmp = head;
		for (int i = 0; i < index - 1; i++)
		{
			tmp = tmp->next;
		}

		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	size++;
}

void LList::removeAt(int index)
{
	assert(0 <= index && index < size);

	if (index == 0) {
		Node* toBeDeleted = head;
		head = head->next;
		delete toBeDeleted;
	}
	else {
		Node* prevNode = head;
		for (int i = 0; i < index - 1; i++)
			prevNode = prevNode->next;
		Node* toBeDeleted = prevNode->next;
		Node* nextNode = toBeDeleted->next;

		delete toBeDeleted;

		prevNode->next = nextNode;
	}
	size--;
}

LList::LList() : head(nullptr), size(0)
{
}
