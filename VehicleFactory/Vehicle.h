#pragma once
#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
class Vehicle {
protected:
	//attribute:
	string VehicleCode;
	string Type;
	string Id;
	string Status;
public:
	virtual string className() = 0;
	virtual Vehicle* clone() = 0;
	virtual string getStatus() { return this->Status; }
	virtual string getINFO() { return this->className() + ", ID=" + this->Id; }
protected:
	static vector<Vehicle*> VehicleList;
	static void addVehicle(Vehicle* objectVehicle);
public:
	static Vehicle* createVehicle(char cTypeOfProduct, char cLocation);
public:
	//virtual destructor method:
	virtual ~Vehicle(){

	}
};
