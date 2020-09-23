#include <iostream>
#include "Company.h"
#include "Employee.h"
using namespace std;


void askForTheOption() {

	cout << "Please select the option that you want to do:" << endl;
	cout << "Type 1 to add a new department." << endl;
	cout << "Type 2 to add a new employee." << endl;
	cout << "Type 3 to change employee's department." << endl;
	cout << "Type 4 to print a report." << endl;
	cout << "Or type anything else to close the program" << endl;
}

int main()
{
	Company company;
	while (true)
	{
		askForTheOption();
		int option;
		cin >> option;
		if (option == 1)
		{
			cout << "-----------starting adding department-----------" << endl;
			cout << "Please enter department name" << endl;
			string departmentName, managerName;
			cin >> departmentName;
			cout << "Please enter department id" << endl;
			int id;
			cin >> id;
			cout << "Please enter the manager name" << endl;
			cin >> managerName;
			Department dep;
			dep.setName(departmentName);
			dep.setDepartmentId(id);
			dep.setManagerName(managerName);
			company.addNewDepartment(dep);
			cout << "-----------finished adding department-----------" << endl;
		}
		else if (option == 2)
		{
			cout << "-----------starting adding employee-----------" << endl;
			cout << "Please enter the name" << endl;
			string name;
			cin >> name;
			int age;
			cout << "Please enter the age" << endl;
			cin >> age;
			double salary;
			cout << "Please enter the salary" << endl;
			cin >> salary;
			int id;
			cout << "Please enter the department id" << endl;
			cin >> id;
			Employee emp;
			emp.setName(name);
			emp.setAge(age);
			emp.setSalary(salary);
			emp.setDepartmentId(id);
			company.addNewEmployee(emp);
			cout << "-----------finished adding employee-----------" << endl;
		}
		else if (option == 3)
		{
			cout << "-----------starting changing employee's department-----------" << endl;
			cout << "changing employee's department" << endl;
			string name;
			int newId;
			cout << "Please enter the employee name" << endl;
			cin >> name;
			cout << "Please enter the new departemnt id" << endl;
			cin >> newId;
			company.changeEmployeesDepartment(name, newId);
			cout << "-----------finished changing employee's department-----------" << endl;
		}
		else if (option == 4)
		{
			cout << "-----------Report-----------" << endl;
			company.printReport();
			cout << "-----------Report End-----------" << endl;
		}
		else {
			return 0;
		}
	}
	return 0;
}