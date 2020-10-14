#pragma once
class Operation
{
private:
	int patientId, doctorId;
	bool status;
public:
	int getPatientId();
	int getDoctorId();
	bool isSuccessful();

	Operation();
	Operation(int pId, int dId, bool s);
};

