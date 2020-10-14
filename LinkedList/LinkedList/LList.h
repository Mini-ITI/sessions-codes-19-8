#include "Node.h"
#pragma once
class LList
{
private:
	Node* head;
	int size;

public:
	int getSize();
	void append(int val);
	void print();
	bool find(int val);
	void insertAt(int index, int val);
	void removeAt(int index);
	LList();
};

