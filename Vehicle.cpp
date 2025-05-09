#include"Vehicle.h"
#include<iostream>

using namespace std;


// Function definitions


Vehicle::Vehicle() // Default constructor
{
	oem = "";
	year = 0;
}

Vehicle::Vehicle(string itemOem, int itemYear)
{
	oem = itemOem;
	year = itemYear;
}

string Vehicle::getOem()
{
	return oem;
}

int Vehicle::getYear()
{
	return year;
}

void Vehicle::displayInfo()
{
	cout << "\nVehicle manufacturer: " << oem;
	cout << "\nYear of manufacture: " << year;
	cout << endl;
}