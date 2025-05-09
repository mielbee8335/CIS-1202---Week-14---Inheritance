#ifndef CAR_H
#define CAR_H
#include"Vehicle.h"

class Car : public Vehicle
{
private:
	int numDoors;
public:
	Car(); // default constructor
	Car(int);	 // constructor
	void displayCarInfo();


};

#endif

#endif