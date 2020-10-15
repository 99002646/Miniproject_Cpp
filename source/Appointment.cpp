#include"Appointment.h"
#include <iostream>
#include<string>


	Appointment::Appointment():nbrhd(""),pntid(0),appid(0),gender(0),age(0),sdldday(0),appday(0.0),hiper(0.0),diabetes(0),alcohal(0),handcap(0.0){}
	Appointment::Appointment(std::string f_name,int f_cal,int f_appid,int f_gender,int f_age,double f_sdldday,double f_appday,int f_hiper,int f_diabetes,int f_alcohal,double f_handcap):
	nbrhd(f_name),pntid(f_cal),appid(f_appid),gender(f_gender),age(f_age),sdldday(f_sdldday),appday(f_appday),hiper(f_hiper),diabetes(f_diabetes),alcohal(f_alcohal),handcap(f_handcap){}
	Appointment::Appointment(const Appointment& obj): nbrhd(obj.nbrhd),pntid(obj.pntid),appid(obj.appid),gender(obj.gender),age(obj.age),sdldday(obj.sdldday),appday(obj.appday),hiper(obj.hiper),diabetes(obj.diabetes),alcohal(obj.alcohal),handcap(obj.handcap){}
	
		
		 int Appointment::getpntid()
		 {
		 	return pntid;
		 }
		 int Appointment::getappid()
		 {
		   return appid;
		 }
		 int Appointment::gethiper()
		 {
		 	 return hiper;
		 }
		 int Appointment::getgender()
		 {
		 	return gender;
		 }
		 double Appointment::getFibre()
		 {
			return sdldday;
		 
		 }

