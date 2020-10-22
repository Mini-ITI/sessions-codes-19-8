#include "KeyNode.h"
#include "KeyNode.cpp"
#pragma once
template <class keyType, class valueType>
class Map
{
private:
	KeyNode<keyType, valueType>* root;
	int size;
public:
	void insert(keyType key, valueType value);
	valueType operator [](keyType key);
	void putIfApsent(keyType key, valueType value);
	bool find(keyType key);
	Map();
};


