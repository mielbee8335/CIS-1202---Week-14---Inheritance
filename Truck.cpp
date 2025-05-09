#include "Truck.h"
#include<iostream>

using namespace std;

// Function definitions:

Truck::Truck()
{
	Vehicle();
	towCapacity = 0.0;
}

Truck::Truck(string oem, int year, double cap)
{
	Vehicle(oem, year);
	towCapacity = cap;
}

void Truck::setTowCapacity(double cap)
{
	towCapacity = cap;
}

double Truck::getTowCapacity()
{
	return towCapacity;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "\nTowing Capacity: " << towCapacity << " lbs";
	cout << endl;
}