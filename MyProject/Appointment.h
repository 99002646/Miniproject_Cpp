#ifndef __APPOINTMENT_H
#define __APPOINTMENT_H
#include<cstdint>
#include<iostream>
#include<string>
#include<list>
#include <sstream>
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
	int f_show;
	public:
		Appointment();
		Appointment(std::string,int,int,int,int,double,double,int,int,int,int,int);
		Appointment(const  Appointment&);
		virtual int getpntid()=0;
		virtual bool showorNoShow()=0;	
};
#endif