#ifndef __PATIENT_H
#define __PATIENT_H

#include<string>
#include<cstdint>

#include "Appointment.h"

class Patient : public Appointment
 {
 public:
	 int shelf;
 	 public:
 	 	Patient();
 	 	Patient(std::string,int,int,int,int,double,double,int,int,int,double,int);
 	 
 	 	int calcgenderpntid();
		bool bestFood();
		int getShelf();
		std::string getPatientname();
		bool RatedorNotrated();
		int operator +(const Patient &obj1);
		
};
#endif
