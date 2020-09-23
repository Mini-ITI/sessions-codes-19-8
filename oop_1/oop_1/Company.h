#include "Employee.h"
#include "Department.h"
#pragma once
class Company
{
private:
	Employee employees[100];
	Department departments[100];

	int departmentIndex, employeesIndex;
public:
	void addNewDepartment(Department dep);
	void addNewEmployee(Employee emp);
	Company();
};

