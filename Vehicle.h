#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
using namespace std;

class Vehicle
{
private:
	string oem;
	int year;
public:
	Vehicle(); // Default constructor
	Vehicle(string itemOem, int itemYear);
	string getOem();
	int getYear();
	void displayInfo();
};


#endif

