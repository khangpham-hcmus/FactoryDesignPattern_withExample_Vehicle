#pragma once
#include"Vehicle.h"
class Truck :public Vehicle {
public:
	Truck()
	{
		//default constructor
		this->VehicleCode = "";
		this->Type = "";
		this->Id = "";
		this->Status = "";
		addVehicle(this);
	}
	Truck(string _vehicleCode_, string _type_, string _id_, string _status_)
	{
		//full constructor
		this->VehicleCode = _vehicleCode_;
		this->Type = _type_;
		this->Id = _id_;
		this->Status = _status_;
		addVehicle(this);
	}
	Truck(Truck& other)//copy constructor:
	{
		this->VehicleCode = other.VehicleCode;
		this->Type = other.Type;
		this->Id = other.Id;
		this->Status = other.Status;
		addVehicle(this);
	}
public:
	string className() { return "TRUCK"; }
	Vehicle* clone() { return new Truck(*this); }
};