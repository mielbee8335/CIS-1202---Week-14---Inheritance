#ifndef TRUCK_H
#define TRUCK_H
#include"Vehicle.h"

class Truck : public Vehicle
{
private:
	double towCapacity;

public:
	Truck(); // Default constructor
	Truck(string, int, double);

	void setTowCapacity(double cap);
	double getTowCapacity();

	void displayInfo();

};

#endif