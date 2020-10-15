#include "Diseases.h"
#include "Appointment.h"
#include "Patient.h"
#include <list>
#include <iterator>
#include <string>
#include<fstream>
#include<iostream>
std::list<Patient> Patients;

	

void Diseases::addPatient(std::string f_name,int f_cal,int f_appid,int f_gender,int f_age,double f_sdldday,double f_appday,int f_hiper,int f_diabetes,int f_alcohal,double f_handcap,int f_shelf)
{
	
Patients.push_back(Patient(f_name, f_cal, f_appid, f_gender, f_age, f_sdldday, f_appday, f_hiper, f_diabetes, f_alcohal, f_handcap, f_shelf));

}
   Patient* Diseases::removePatient(std::string f_name)
{
   	std::list<Patient> :: iterator iter;

    for(iter=Patients.begin();iter!=Patients.end();iter++)
    {
        if(iter->getPatientname()== f_name)
        {
           Patients.erase(iter);
           break;
        }
    }
    return NULL;
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
   double Diseases::findAveragegender()
   {
   	 double sum=0;
    std:: list <Patient>::iterator iter;
    for(iter=Patients.begin();iter!=Patients.end();iter++)
    {
        sum = sum+iter->getgender();
    }

    return sum/Patients.size();
   
   }
   int Diseases::findMaxcalorie()
   {
   	 std:: list<Patient> :: iterator iter = Patients.begin();
    auto maxGender  = iter->getpntid();
   // auto maxiter = iter;
    iter++;
    for(;iter!=Patients.end();++iter)
    {
        if(maxGender < iter->getpntid())
        {
            maxGender = iter->getpntid();
           // maxiter = iter;
        }

    }
    return maxGender; 
   }
   int Diseases::countAll()
   {
   
   	 return Patients.size();
   
   }
   std::string Diseases::bestPatient()
   {
   std::list<Patient>::iterator iter= Patients.begin();;
   	int count=0;
   	auto min_iter=iter;
   	int minval=Patients.begin()->getgender();
   	++iter;
   for(;iter!=Patients.end();iter++)
   {
       if(iter->getgender()<minval)
       {
        minval=iter->getgender();
        min_iter=iter;
        }
   }
   return min_iter->getPatientname();
   }
  
   

