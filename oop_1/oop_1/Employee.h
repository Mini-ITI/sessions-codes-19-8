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
	void setSalary(double s);
	void setAge(int a);

	void setName(string n);
	string getName();
	double getSalary();
	int getAge();
	void setDepartmentId(int id);
	int getDepartmentId();

};

