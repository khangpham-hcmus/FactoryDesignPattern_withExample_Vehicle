#pragma once
#include"Vehicle.h"
class Train :public Vehicle {
public:
	Train()
	{
		//default constructor
		this->VehicleCode = "";
		this->Type = "";
		this->Id = "";
		this->Status = "";
		addVehicle(this);
	}
	Train(string _vehicleCode_, string _type_, string _id_, string _status_)
	{
		//full constructor
		this->VehicleCode = _vehicleCode_;
		this->Type = _type_;
		this->Id = _id_;
		this->Status = _status_;
		addVehicle(this);
	}
	Train(Train& other)
	{	//copy constructor:
		this->VehicleCode = other.VehicleCode;
		this->Type = other.Type;
		this->Id = other.Id;
		this->Status = other.Status;
		addVehicle(this);
	}
public:
public:
	string className() { return "TRAIN"; }
	Vehicle* clone() { return new Train(*this); }


};