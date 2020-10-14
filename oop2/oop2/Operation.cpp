#include "Operation.h"

int Operation::getPatientId()
{
	return patientId;
}

int Operation::getDoctorId()
{
	return doctorId;
}

bool Operation::isSuccessful()
{
	return status;
}

Operation::Operation()
{
}

Operation::Operation(int pId, int dId, bool s)
{
	patientId = pId;
	doctorId = dId;
	status = s;
}
