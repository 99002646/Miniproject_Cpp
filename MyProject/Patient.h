#ifndef __PATIENT_H
#define __PATIENT_H

#include<iostream>
#include<string>
#include<cstdint>
#include <sstream>
#include "Appointment.h"
using namespace std;

class Patient : public Appointment
 {
 public:
	 int shelf;
 	 public:
 	 	Patient();
 	 	Patient(std::string,int,int,int,int,double,double,int,int,int,int,int);
 	 
 	 	int getpntid();
		bool patientAged();
		std::string getPatientname();
		bool showorNoShow();
		int operator +(const Patient &obj1);	
};
#endif