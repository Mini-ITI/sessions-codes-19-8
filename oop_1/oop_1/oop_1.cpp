#include <iostream>
#include "Employee.h"
using namespace std;


int main()
{
	Employee emp = Employee("muhammed", 100, 24, 1);

	cout << emp.getName() << endl;
	emp.setName("aly");

	cout << emp.getName();
	return 0;
}