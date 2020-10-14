#include "Doctor.h"
#include <iostream>
using namespace std;
void Doctor::setSalary(double s)
{
	salary = s;
}

void Doctor::setMajor(string m)
{
	major = m;
}

double Doctor::getSalary()
{
	return salary;
}

string Doctor::getMajor()
{
	return major;
}

void Doctor::sayHello()
{
	Person::sayHello();
	cout << " i'm a doctor" << endl;
}

void Doctor::work()
{
	cout << "I'm saving people" << endl;
}

Doctor::Doctor()
{
}

Doctor::Doctor(int i, string n, double s, string m) : Person(i, n)
{
	salary = s;
	major = m;
}
