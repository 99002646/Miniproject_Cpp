#ifndef DISEASES_H_INCLUDED
#define DISEASES_H_INCLUDED

#include "Patient.h"
#include "Appointment.h"

#include<iostream>

#include<string>
#include<list>


#include<iterator>
#include<fstream>

class Diseases
{

	public:

   void addPatient(std::string f_name,int f_cal,int f_appid,int f_gender,int f_age,double f_sdldday,double f_appday,int f_hiper,int f_diabetes,int alcohal,double f_handcap,int f_shelf);
   Patient* removePatient(std::string f_name);
   bool findPatientByName(std::string);
   double findAveragegender();
   int findMaxcalorie();
   int countAll();
   std::string bestPatient();

};
#endif 


