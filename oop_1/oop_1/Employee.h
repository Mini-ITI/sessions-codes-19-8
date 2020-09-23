#include <string>
using namespace std;
#pragma once
class Employee
{
private:
	string name;
	double salary;
	int age, departmentId;
public:
	void setName(string n);
	void setSalary(double s);
	void setAge(int a);
	void setDepartmentId(int id);

	string getName();
	double getSalary();
	int getAge();
	int getDepartmentId();

	Employee(string n, double s, int a, int id);
};

