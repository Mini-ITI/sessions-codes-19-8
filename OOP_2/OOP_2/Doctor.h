#include <string>
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
	double getSalary();

	void setMajor(string m);
	string getMajor();
};

