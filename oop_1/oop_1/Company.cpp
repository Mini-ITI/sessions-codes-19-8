#include "Company.h"

void Company::addNewDepartment(Department dep)
{
	departments[departmentIndex] = dep;
	departmentIndex++;
}

void Company::addNewEmployee(Employee emp)
{
	employees[employeesIndex] = emp;
	employeesIndex++;
}

Company::Company() : departmentIndex(0), employeesIndex(0)
{
}
