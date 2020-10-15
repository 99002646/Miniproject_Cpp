#ifndef __APPOINTMENT_H
#define __APPOINTMENT_H
#include<cstdint>
#include<string>
#include<list>
class Appointment
{
public:
	std::string nbrhd;
	int pntid;
	int appid;
	int gender;
	int age;
	double sdldday;
	double appday;
	 int hiper;
	int diabetes;
	int alcohal;
	double handcap;
	public:
		Appointment();
		Appointment(std::string,int,int,int,int,double,double,int,int,int,double);
		Appointment(const  Appointment&);
		virtual int calcgenderpntid()=0;
		virtual bool bestFood()=0;
		virtual bool RatedorNotrated()=0;
		 int getpntid();
		 int getappid();
		 
		 int gethiper();
		 int getgender();
		 double getFibre();
		
		
		
		
};
#endif
