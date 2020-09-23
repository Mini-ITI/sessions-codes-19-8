#include "Department.h"

void Department::setName(string n)
{
	name = n;
}

string Department::getName()
{
	return name;
}

void Department::setDepartmentId(int id)
{
	departmentId = id;
}

int Department::getDepartmentId()
{
	return departmentId;
}

void Department::setManagerName(string mn)
{
	managerName = mn;
}

string Department::getManagerName()
{
	return managerName;
}
