#pragma once
#include <string>
using namespace std;
class Person
{
private:
	int id;
	string name;

public:
	void setId(int i);
	int getId();

	void setName(string n);
	string getName();
};

