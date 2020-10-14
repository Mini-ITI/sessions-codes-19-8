#include "Operation.h"
#include "Doctor.h"
#include "Patient.h"
#pragma once
class Hospital
{
private:
	Operation operations[100];
	Doctor doctors[100];
	Patient patients[100];
	int doctorsIndex, patientsIndex, operationsIndex;
public:
	void addDoctor();
	void addPatient();
	void addOperation();
	void printReport();

	Hospital();
};

