#include "Truck.h"
#include<iostream>

using namespace std;

// Function definitions:

Truck::Truck()
{
	Vehicle();
	towCapacity = 0;
}

Truck::Truck(string &m, int y, int cap)
{
	Vehicle(m, y);
	towCapacity = cap;
}

void Truck::setTowCapacity(int cap)
{
	towCapacity = cap;
}

int Truck::getTowCapacity()
{
	return towCapacity;
}

void Truck::displayInfo(string& m, int y, int cap)
{
	Vehicle::displayInfo(m, y);
	setTowCapacity(cap);
	cout << "\tTowing Capacity: " << getTowCapacity() << endl;
}