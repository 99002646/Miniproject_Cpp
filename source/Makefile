all: all.out 
all.out : Appointment.o Patient.o Diseases.o Patient-test.o Diseases-test.o 
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
Diseases-test.o:Diseases-test.cpp Diseases.h Appointment.h Patient.h 
	g++ $< -c	
Patient-test.o: Patient-test.cpp Appointment.h Patient.h
	g++ $< -c
Diseases.o : Diseases.cpp Diseases.h Patient.h Appointment.h
	g++ $< -c
Patient.o : Patient.cpp Patient.h Appointment.h
	g++ $< -c    
Appointment.o : Appointment.cpp Appointment.h
	g++ $< -c
clean:
	rm -rf *.o *.out