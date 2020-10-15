#include "Appointment.h"
#include "Patient.h"
#include "Diseases.h"
#include <gtest/gtest.h>
#include<fstream>
#include<string>
using namespace std;
namespace {
class AppointmentTest : public ::testing::Test {
public:
  Appointment *ptr;  
    void SetUp() 
  			{ 
  			
		  		std::list<string> res;
		     		std::list<string> ::iterator iter;
		     		std::string nbrhd="";
		     		int cal=0,prot=0,gender=0,sod=0,sugar=0,pot=0,vit=0,shel=0;
		     		double fib=0.0,carb=0.0,rate=0.0;
		    		std::string S,T;
		    		fstream fin;
		    		int count=1;
		    		fin.open("appointment.csv", ios::in);
		    		while(getline(fin, S))
		    		{
		    			stringstream X(S);
		    			while (getline(X, T,'\n'))
		   			 {
		   	 			res.push_back(T);
		    			 }
		   	        }
		    		iter=res.begin();
		   		 
		    		for(;iter!=res.end();++iter)
		    		{
		    			stringstream ss(*iter); 
		    			while (ss.good()) 
		    			{ 
						string substr; 
						getline(ss, substr, ','); 
						switch(count)
						{
							case 1:
								nbrhd=substr;
								break;
							case 2:
								cal=std::stoi(substr);
								break;
							case 3:
								prot=std::stoi(substr);
								break;
							case 4:
								gender=std::stoi(substr);
								break;
							case 5:
								sod=std::stoi(substr);
								break;
							case 6:
								fib=std::stod(substr);
								break;
							case 7:
								carb=std::stod(substr);
								break;
							case 8:
								sugar=std::stoi(substr);
								break;
							case 9:
								pot=std::stoi(substr);
								break;
							case 10:
								vit=std::stoi(substr);
								break;
							case 11:
								rate=std::stod(substr);
								break;	
							case 12:
								shel=std::stoi(substr);
											
								
ptr = new Patient(nbrhd,cal,prot,gender,sod,fib,carb,sugar,pot,vit,rate,shel);
nbrhd="",cal=0,prot=0,gender=0,sod=0,fib=0.0,carb=0.0,sugar=0,pot=0,vit=0,rate=0.0,shel=0,count=0;

								//break;
						
						}
						++count;
						
		    			} 
		  		}
    
 		}	  
  
  void TearDown() {
    delete ptr;
  }
};

TEST_F(AppointmentTest, DefaultConstructor) {
  Patient ft;
  EXPECT_EQ(0,ft.gethiper());
  EXPECT_EQ(0,ft.getgender());
  EXPECT_EQ(0,ft.getpntid());
  EXPECT_EQ(0,ft.getappid());
}
TEST_F(AppointmentTest, ParameterizedConstructor) {
 Patient *ft = dynamic_cast<Patient*>(ptr);
  EXPECT_EQ(8, ft->gethiper());
  EXPECT_EQ(1, ft->getgender());
  EXPECT_EQ(110, ft->getpntid());
  EXPECT_EQ(2,ft->getappid());
}
TEST_F(AppointmentTest, operatoroverloadingtest) {
  Patient ft1 ("Almonds",10,2,3,8,3.0,2.0,5.0,3,2,11.2,2);
   Patient ft2 ("raisins",7,2,9,1,0,5.0,5,5,9,12.2,30);
  EXPECT_EQ(17,ft1+ft2);
  
}
}

