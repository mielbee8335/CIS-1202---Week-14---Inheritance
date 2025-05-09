#ifndef TRUCK_H
#define TRUCK_H
#include"Vehicle.h"

class Truck : public Vehicle
{
private:
	double towCapacity;

public:
	Truck(); // Default constructor
	Truck(string itemOem, int itemYear, double towCapacity);

	void set towCapacity();
	double towCapacity(double itemTowCap);

	void displayInfo();

};

#endif