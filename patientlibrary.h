#ifndef PATIENTLIBRARY_H
#define PATIENTLIBRARY_H

#include "patient.h"
#include <vector>

using namespace std;

class PatientLibrary
{
public:
    PatientLibrary();

private:
    vector<Patient> PatientList;

public:
    void viewPatient(int id);
    Patient* findPatient(int id, QString name);
    void createPatient();
    void deletePatient(int id);
    void updatePatientPersonalDetails(int id);
    void updatePatientMedicalDetails(int id);
    void generatePatientReport();

};

#endif // PATIENTLIBRARY_H
