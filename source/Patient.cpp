#include "Patient.h"
#include "Appointment.h"

		Patient::Patient():Appointment(),shelf(0){ }
 	 	Patient::Patient(std::string f_name,int f_cal,int f_appid,int f_gender,int f_age,double f_sdldday,double f_appday,int f_hiper,int f_diabetes,int f_alcohal,double f_handcap,int f_shelf):Appointment( f_name, f_cal, f_appid, f_gender, f_age, f_sdldday, f_appday, f_hiper, f_diabetes, f_alcohal, f_handcap),shelf(f_shelf){}
 	 	
   int Patient::calcgenderpntid()
		{
		
			return (9*pntid);
		}
    bool Patient::bestFood()
		{
		if(hiper<=5.0 && sdldday>=3 && gender<=3)
			return true;
		else 
			return false;			
		}
  int Patient::getShelf()
		{
			return shelf;
		}
	bool Patient::RatedorNotrated()
		{
		
			if(handcap>=75.0 && handcap<=100.0 )
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
   return pntid+obj1.pntid;
   }
  
