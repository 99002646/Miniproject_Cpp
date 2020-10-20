#include "Patient.h"
#include "Appointment.h"
using namespace std;
#include<iostream>
#include<string>
#include <sstream>

		Patient::Patient():Appointment(),shelf(0){ }
 	 	Patient::Patient(std::string f_nbrhd,int f_pntid,int f_appid,int f_gender,int f_age,double f_sdldday,double f_appday,int f_hiper,int f_diabetes,int f_alcohal,int f_handcap,int ff_show):Appointment( f_nbrhd, f_pntid, f_appid, f_gender, f_age, f_sdldday, f_appday, f_hiper, f_diabetes, f_alcohal, f_handcap,ff_show){}
 	 	
   int Patient::getpntid()
		{
			return pntid;
		}
   bool Patient::patientAged()
		{
		if(age>30)
			return true;
		else 
			return false;			
		}
	bool Patient::showorNoShow()
		{
			if(f_show==1 )
				return true;
			else
				return false;	
		}

std::string  Patient::getPatientname()
		{
		return Appointment::nbrhd;
		}
		
int Patient::operator +(const Patient &obj1)
   {
   return f_show+obj1.f_show;
   }