#include "KeyNode.h"
template<class keyType, class valueType>
KeyNode<keyType, valueType>::KeyNode(keyType k, valueType v)
{
	key = k;
	value = v;
	left = nullptr;
	right = nullptr;
}