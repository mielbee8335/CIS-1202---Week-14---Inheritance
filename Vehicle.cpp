#include"Vehicle.h"
#include<iostream>

using namespace std;


// Function definitions


Vehicle::Vehicle() // Default constructor
{
	oem = "";
	yearBuilt = 0;
}

Vehicle::Vehicle(string &m, int y)
{
	oem = m;
	yearBuilt = y;
}

void Vehicle::setOem(string &m)
{
	oem = m;
}


string Vehicle::getOem()
{
	return oem;
}

void Vehicle::setYear(int y)
{
	yearBuilt = y;
}

int Vehicle::getYear()
{
	return yearBuilt;
}

void Vehicle::displayInfo(string &m, int y)
{
	cout << "Vehicle information:" << endl;
	setOem(m);
	cout << "\tVehicle manufacturer: " << getOem() << endl;
	setYear(y);
	cout << "\tYear of manufacture: " << getYear() << endl;
}