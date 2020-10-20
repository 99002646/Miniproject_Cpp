#include "Diseases.h"
#include "Appointment.h"
#include "Patient.h"
#include <list>
#include <iterator>
#include <string>
#include<fstream>
#include<iostream>
#include <sstream>
std::list<Patient> Patients;
using namespace std;

	

void Diseases::addPatient(std::string f_nbrhd,int f_pntid,int f_appid,int f_gender,int f_age,double f_sdldday,double f_appday,int f_hiper,int f_diabetes,int f_alcohal,double f_handcap,int f_show)
{
	
Patients.push_back(Patient(f_nbrhd, f_pntid, f_appid, f_gender, f_age, f_sdldday, f_appday, f_hiper, f_diabetes, f_alcohal, f_handcap, f_show));

}

bool Diseases::findPatientByName(std::string c_name)
{
   	std::list<Patient> :: iterator iter;

    for(iter=Patients.begin();iter!=Patients.end();iter++)
    {
        if(c_name == iter->getPatientname())
        {
            return true;
        }
    }
    return false; 
}

int Diseases::countAll()
{
    return Patients.size();
   
}