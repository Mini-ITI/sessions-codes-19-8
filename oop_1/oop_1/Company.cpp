#include "Company.h"
#include <iostream>
using namespace std;
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

void Company::changeEmployeesDepartment(string name, int newId)
{
	for (int i = 0; i < employeesIndex; i++)
	{
		if (employees[i].getName() == name) {
			employees[i].setDepartmentId(newId);
			break;
		}
	}
}

void Company::printReport()
{
	for (int i = 0; i < departmentIndex; i++)
	{
		int currentDepId = departments[i].getDepartmentId(), counter = 0;
		for (int j = 0; j < employeesIndex; j++)
		{
			if (currentDepId == employees[j].getDepartmentId())
				counter++;
		}
		cout << "Department that it's id is: " << currentDepId << " has " << counter << " employees." << endl;
	}
}

Company::Company() : departmentIndex(0), employeesIndex(0)
{
}
