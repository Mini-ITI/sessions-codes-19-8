#include<string>
#include "Person.h"
using namespace std;
#pragma once
class Doctor : public Person
{
private:
	double salary;
	string major;
public:
	void setSalary(double s);
	void setMajor(string m);

	double getSalary();
	string getMajor();

	void sayHello();
	void work();

	Doctor();
	Doctor(int i, string n, double s, string m);
};

