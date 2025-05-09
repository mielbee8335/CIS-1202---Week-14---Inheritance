#ifndef CAR_H
#define CAR_H

#include"Vehicle.h"

class Car : public Vehicle
{
private:
	int numDoors;

public:
	Car(); // default constructor
	Car(string, int, int);	 // constructor
	
	void setNumDoors(int numDoors);
	int getNumDoors();
	
	void displayInfo();

};

#endif