#include"Vehicle.h"
#include<iostream>

using namespace std;


// Function definitions


Vehicle::Vehicle() // Default constructor
{
	oem = "";
	yearBuilt = 0;
}

Vehicle::Vehicle(string itemOem, int itemYear)
{
	oem = itemOem;
	yearBuilt = itemYear;
}

void Vehicle::setOem(string itemOem)
{
	oem = itemOem;
}


string Vehicle::getOem()
{
	return oem;
}

void Vehicle::setYear(int itemYear)
{
	yearBuilt = itemYear;
}

int Vehicle::getYear()
{
	return yearBuilt;
}

void Vehicle::displayInfo()
{
	cout << "\nVehicle manufacturer: " << oem;
	cout << "\nYear of manufacture: " << yearBuilt;
	cout << endl;
}