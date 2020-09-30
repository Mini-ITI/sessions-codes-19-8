#include <iostream>
#include "Doctor.h"
#include "Hospital.h"
#include "Rectangle.h"
using namespace std;
int main()
{
	Rectangle r;
	Hospital hospital;
	while (true)
	{
		cout << "Please select option from the following:" << endl;
		cout << "Type 1 to add a doctor" << endl;
		cout << "Type 2 to add a patient" << endl;
		cout << "Type 3 to add an operation" << endl;
		cout << "Type 4 to print a report" << endl;
		cout << "Type anything else to close the program" << endl;
		int option;
		cin >> option;
		if (option == 1)
		{
			hospital.addDoctor();
		}
		else if (option == 2)
		{
			hospital.addPatient();
		}
		else if (option == 3)
		{
			hospital.addOperation();
		}
		else if (option == 4)
		{
			hospital.printReport();
		}
		else {
			return 0;
		}
	}
	return 0;
}
