#ifndef TRUCK_H
#define TRUCK_H
#include"Vehicle.h"

class Truck : public Vehicle
{
private:
	int towCapacity;

public:
	Truck(); // Default constructor
	Truck(string &, int, int);

	using Vehicle::Vehicle;

	void setTowCapacity(int);
	int getTowCapacity();

	void displayInfo(string &, int, int);

};

#endif