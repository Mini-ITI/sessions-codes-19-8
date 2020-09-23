#include "Employee.h"

void Employee::setName(string n)
{
	name = n;
}

void Employee::setSalary(double s)
{
	salary = s;
}

void Employee::setAge(int a)
{
	age = a;
}

void Employee::setDepartmentId(int id)
{
	departmentId = id;
}

string Employee::getName()
{
	return name;
}

double Employee::getSalary()
{
	return salary;
}

int Employee::getAge()
{
	return age;
}

int Employee::getDepartmentId()
{
	return departmentId;
}
