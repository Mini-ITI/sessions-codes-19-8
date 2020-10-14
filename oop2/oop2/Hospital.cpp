#include "Hospital.h"
#include <iostream>
using namespace std;


void Hospital::addDoctor()
{
	int id;
	double salary;
	string name, major;

	id = doctorsIndex + 1;
	cout << "Please enter the doctor's name" << endl;
	cin >> name;
	cout << "Please enter the doctor's major" << endl;
	cin >> major;
	cout << "Please enter the doctor's salary" << endl;
	cin >> salary;

	Doctor doctor = Doctor(id, name, salary, major);

	doctors[doctorsIndex] = doctor;
	doctorsIndex++;
}

void Hospital::addPatient()
{
	int id;
	string name, symptom, mobile;
	id = patientsIndex + 1;
	cout << "Please enter the patients's name" << endl;
	cin >> name;
	cout << "Please enter the patient's symptom" << endl;
	cin >> symptom;
	cout << "Please enter the patient's mobile" << endl;
	cin >> mobile;


	Patient patient = Patient(id, name, mobile, symptom);
	patients[patientsIndex] = patient;
	patientsIndex++;
}

void Hospital::addOperation()
{

	int pId, dId;
	bool status;
	cout << "Please enter the operation's patient id" << endl;
	cout << "The patients are:" << endl;
	for (int i = 0; i < patientsIndex; i++)
	{
		cout << "To select the patient " << patients[i].getName() << " type " << patients[i].getId() << endl;
	}
	cin >> pId;
	while (pId < 1 || pId > patientsIndex)
	{
		cout << "Sorry, you entered wrong id, please try again" << endl;
		cin >> pId;
	}
	cout << "Please enter the operation's doctor id" << endl;
	cout << "The doctors are:" << endl;
	for (int i = 0; i < doctorsIndex; i++)
	{
		cout << "To select the doctor " << doctors[i].getName() << " type " << doctors[i].getId() << endl;
	}
	cin >> dId;
	while (dId < 1 || dId > doctorsIndex)
	{
		cout << "Sorry, you entered wrong id, please try again" << endl;
		cin >> dId;
	}

	cout << "Please enter the operation's status (S/F)" << endl;
	string sts;
	cin >> sts;
	if (sts == "S")
		status = true;
	else
		status = false;

	Operation operation = Operation(pId, dId, status);
	operations[operationsIndex] = operation;
	operationsIndex++;
}

void Hospital::printReport()
{
	for (int i = 0; i < doctorsIndex; i++)
	{
		int doctorId = doctors[i].getId(), totalOperations = 0, succeededOperations = 0;
		for (int j = 0; j < operationsIndex; j++)
		{
			if (operations[j].getDoctorId() == doctorId)
			{
				totalOperations++;
				if (operations[j].isSuccessful())
					succeededOperations++;
			}
		}
		cout << "The accuracy of doctor " << doctors[i].getName() << " is " << (double)succeededOperations * 100 / totalOperations << endl;
	}
}

Hospital::Hospital()
{
	operationsIndex = 0;
	doctorsIndex = 0;
	patientsIndex = 0;
}
