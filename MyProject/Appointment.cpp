#include"Appointment.h"
#include <iostream>
#include<string>
#include <sstream>
using namespace std;
	Appointment::Appointment():nbrhd(""),pntid(0),appid(0),gender(0),age(0),sdldday(0),appday(0.0),hiper(0.0),diabetes(0),alcohal(0),handcap(0),f_show(0){}
	Appointment::Appointment(std::string f_nbrhd,int f_pntid,int f_appid,int f_gender,int f_age,double f_sdldday,double f_appday,int f_hiper,int f_diabetes,int f_alcohal,int f_handcap,int ff_show):
	nbrhd(f_nbrhd),pntid(f_pntid),appid(f_appid),gender(f_gender),age(f_age),sdldday(f_sdldday),appday(f_appday),hiper(f_hiper),diabetes(f_diabetes),alcohal(f_alcohal),handcap(f_handcap),f_show(ff_show){}
	Appointment::Appointment(const Appointment& obj): nbrhd(obj.nbrhd),pntid(obj.pntid),appid(obj.appid),gender(obj.gender),age(obj.age),sdldday(obj.sdldday),appday(obj.appday),hiper(obj.hiper),diabetes(obj.diabetes),alcohal(obj.alcohal),handcap(obj.handcap),f_show(obj.f_show){}
		
		 int Appointment::getpntid()
		 {
		 	return pntid;
		 }