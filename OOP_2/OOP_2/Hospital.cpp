#include "Hospital.h"
#include <iostream>
bool Hospital::findDoctorId(int id)
{
	for (int i = 0; i < doctorCounter; i++)
	{
		if (id == doctors[i].getId())
			return true;
	}
	return false;
}
bool Hospital::findPatientId(int id)
{
	for (int i = 0; i < patientCounter; i++)
	{
		if (id == patients[i].getId())
			return true;
	}
	return false;
}
void Hospital::addDoctor()
{
	int id;
	string name, major;
	double salary;

	cout << "Please enter the doctor's id" << endl;
	cin >> id;
	while (findDoctorId(id) == true)
	{
		cout << "This id already exists so please enter another id" << endl;
		cin >> id;
	}
	cout << "Please enter the doctor's name" << endl;
	cin >> name;
	cout << "Please enter the doctor's major" << endl;
	cin >> major;
	cout << "Please enter the doctor's salary" << endl;
	cin >> salary;

	
	Doctor doctor;
	doctor.setId(id);
	doctor.setName(name); 
	doctor.setMajor(major);
	doctor.setSalary(salary);

	doctors[doctorCounter] = doctor;
	doctorCounter++;
}

void Hospital::addPatient()
{
	int id;
	string name, mobile, symptom;

	cout << "Please enter the patient's id" << endl;
	cin >> id;
	while (findPatientId(id) == true)
	{
		cout << "This id already exists so please enter another id" << endl;
		cin >> id;
	}
	cout << "Please enter the patient's name" << endl;
	cin >> name;
	cout << "Please enter the patient's mobile" << endl;
	cin >> mobile;
	cout << "Please enter the patient's symptom" << endl;
	cin >> symptom;

	Patient patient;
	patient.setId(id);
	patient.setName(name);
	patient.setMobile(mobile);
	patient.setSymptom(symptom);

	patients[patientCounter] = patient;
	patientCounter++;
}

void Hospital::addOperation()
{
	int patientId, doctorId;
	bool status;
	char s;
	cout << "Please enter the doctor's Id" << endl;
	cin >> doctorId;

	cout << "Please enter the patient's Id" << endl;
	cin >> patientId;


	cout << "Please enter operation's status (S/F)" << endl;
	cin >> s;

	if (s == 'S') {
		status = true;
	}
	else {
		status = false;
	}
	Operation operation = Operation(patientId, doctorId, status);
	operations[operationCounter] = operation;
	operationCounter++;
}

void Hospital::printReport()
{
	int succeededOperations = 0;
	for (int i = 0; i < operationCounter; i++)
	{
		if (operations[i].isSucceeded() == true)
		{
			succeededOperations++;
		}
	}

	cout << "Our hospital has " << succeededOperations << " succeeded operations and " << operationCounter - succeededOperations << " failed operations." << endl;
	for (int i = 0; i < doctorCounter; i++)
	{
		int doctorId = doctors[i].getId(), succeeded = 0, overall = 0;
		for (int j = 0; j < operationCounter; j++)
		{
			if (operations[j].getDoctorId() == doctorId)
			{
				overall++;
				if (operations[j].isSucceeded())
				{
					succeeded++;
				}
			}
		}
		double percentage = succeeded * 100.0 / overall;
		cout << "The accuracy of doctor " << doctors[i].getName() << " is " << percentage << endl;
	}
}

Hospital::Hospital()
{
	doctorCounter = 0;
	patientCounter = 0;
	operationCounter = 0;
}
