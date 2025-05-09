#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
using namespace std;

class Vehicle
{
private:
	string oem;
	int yearBuilt;
public:
	Vehicle(); // Default constructor
	Vehicle(string itemOem, int itemYear);
	
	void setOem(string itemOem);
	string getOem();
	
	void setYear(int itemYear);
	int getYear();
	
	void displayInfo();
};


#endif

