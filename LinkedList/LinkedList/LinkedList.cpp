#include <iostream>
#include "LList.h"
using namespace std;
int main()
{
	LList list;
	list.append(4);
	list.append(30);
	list.append(16);
	list.insertAt(2, 20);
	list.print();
	list.removeAt(0);
	list.print();
	return 0;
}