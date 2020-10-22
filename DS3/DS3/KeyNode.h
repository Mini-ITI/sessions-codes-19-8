#pragma once
template <class keyType, class valueType>
class KeyNode
{
public:
	keyType key;
	valueType value;
	KeyNode<keyType, valueType>* left;
	KeyNode<keyType, valueType>* right;

	KeyNode(keyType k, valueType v);
};


