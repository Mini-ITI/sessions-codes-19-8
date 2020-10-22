#include <iostream>
#include "BST.h"
#include "BST.cpp"
#include "Map.h"
#include "Map.cpp"
using namespace std;
int main()
{
	Map<string, int> mp;
	mp.insert("muhammed", 1);
	//mp["muhammed"] = 1;
	mp.putIfApsent("muhammed", 2);
	mp.putIfApsent("ahmed", 13);
	return 0;
}