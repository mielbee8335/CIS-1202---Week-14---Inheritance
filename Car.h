#ifndef CAR_H
#define CAR_H

#include"Vehicle.h"

class Car : public Vehicle
{
private:
	int numDoors;

public:
	Car(); // default constructor
	Car(string&, int, int);	// constructor
	
	using Vehicle::Vehicle;

	void setNumDoors(int);
	int getNumDoors();
	
	void displayInfo(string& m, int y, int doors);

};

#endif