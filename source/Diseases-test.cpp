#include "Appointment.h"
#include "Patient.h"
#include "Diseases.h"
#include <gtest/gtest.h>
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int x=0;

namespace {
class DiseasesTest : public ::testing::Test {
	public:
	Diseases n;
	void loadcsv()
	{
		std::list<string> res;
		     		std::list<string> ::iterator iter;
		     		std::string nbrhd="";
		     		int cal=0,prot=0,gender=0,sod=0,sugar=0,pot=0,vit=0,shel=0;
		     		double fib=0.0,carb=0.0,rate=0.0;
		    		std::string S, T;
		    		fstream fin;
		    		int count=1;
		    		std::string substr; 
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
											
								
n.addPatient(nbrhd,cal,prot,gender,sod,fib,carb,sugar,pot,vit,rate,shel);
nbrhd="",cal=0,prot=0,gender=0,sod=0,fib=0.0,carb=0.0,sugar=0,pot=0,vit=0,rate=0.0,shel=0,count=0;
								break;
						
						}
						++count;
						
		    			}
		    			
		    			
		  		}
	
	}
 void SetUp() 
   
 { 
  	x=0;		
	loadcsv();	  		
		  		
    
 		}	 



  void TearDown() { }
  };
 
 
}


TEST_F(DiseasesTest, counttest) {
 
  EXPECT_EQ(73, n.countAll());

}
TEST_F(DiseasesTest, avggendertest) {
 
  EXPECT_DOUBLE_EQ(1.0273972602739727,n.findAveragegender());

}
TEST_F(DiseasesTest, maxcalorietest) {
 
  EXPECT_EQ(160,n.findMaxcalorie());

}
TEST_F(DiseasesTest, bestPatient) {
 
  EXPECT_EQ("Apple Jacks",n.bestPatient());

}
TEST_F(DiseasesTest,findPatientByName) {
 
  EXPECT_EQ(true,n.findPatientByName("Apple Jacks"));

}
TEST_F(DiseasesTest,removePatient) {
 
  EXPECT_EQ(NULL, n.removePatient("beetroot"));

}






