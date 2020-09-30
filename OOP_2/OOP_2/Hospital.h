#include "Patient.h"
#include "Doctor.h"
#include "Operation.h"
#pragma once
class Hospital
{
private:
	Doctor doctors[100];
	Patient patients[100];
	Operation operations[100];
	int doctorCounter, patientCounter, operationCounter;
	bool findDoctorId(int id);
	bool findPatientId(int id);
public:
	void addDoctor();
	void addPatient();
	void addOperation();
	void printReport();
	Hospital();
};

