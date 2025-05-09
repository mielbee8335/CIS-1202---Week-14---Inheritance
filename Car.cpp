#include"Car.h"
#include<iostream>

using namespace std;

// Function definitions

Car::Car()
{
	Vehicle();
	numDoors = 0;
}

Car::Car(string oem, int year, int doors)
{
	Vehicle(oem, year);
	numDoors = doors;
}

void Car::setNumDoors(int doors)
{
	numDoors = doors;
}

int Car::getNumDoors()
{
	return numDoors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "\nNumber of doors: " << numDoors << endl;
}

