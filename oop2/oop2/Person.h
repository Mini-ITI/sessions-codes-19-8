#include<string>
using namespace std;
#pragma once
class Person
{
private:
	int id;
	string name;
public:
	void setId(int i);
	void setName(string n);

	int getId();
	string getName();

	void sayHello();
	virtual void work() = 0;
	Person(int i, string n);
	Person();
};

