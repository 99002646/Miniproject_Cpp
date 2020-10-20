#ifndef DISEASES_H_INCLUDED
#define DISEASES_H_INCLUDED

#include "Patient.h"
#include "Appointment.h"

#include<iostream>

#include<string>
#include<list>


#include<iterator>
#include<fstream>
#include <sstream>
using namespace std;

class Diseases
{
	public:
   void addPatient(std::string f_nbrhd,int f_pntid,int f_appid,int f_gender,int f_age,double f_sdldday,double f_appday,int f_hiper,int f_diabetes,int alcohal,double f_handcap,int f_show);
   bool findPatientByName(std::string);
   int countAll();
};
#endif 