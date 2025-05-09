#include"Car.h"
#include<iostream>

using namespace std;

// Function definitions

Car::Car()
{
	numDoors = 0;
}

Car::Car(int doors)
{
	numDoors = doors;
}

void Car::displayCarInfo()
{
	displayInfo();
	cout << "\nNumber of doors: " << numDoors << endl;
}

