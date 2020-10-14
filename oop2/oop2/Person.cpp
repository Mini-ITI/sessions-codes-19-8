#include "Person.h"
#include <iostream>
using namespace std;
void Person::setId(int i)
{
	id = i;
}

void Person::setName(string n)
{
	name = n;
}

int Person::getId()
{
	return id;
}

string Person::getName()
{
	return name;
}

void Person::sayHello()
{
	cout << "hello";
}

Person::Person(int i, string n)
{
	id = i;
	name = n;
}

Person::Person()
{
}
