#pragma once
class Operation
{
private:
	int patientId;
	int doctorId;
	bool status;

public:
	int getPatientId();
	int getDoctorId();
	bool isSucceeded();

	Operation();
	Operation(int pId, int dId, bool s);
};

