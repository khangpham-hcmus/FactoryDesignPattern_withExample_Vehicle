#pragma once
#include"Vehicle.h"
class Sea :public Vehicle {
public:
	Sea()
	{
		//default constructor
		this->VehicleCode = "";
		this->Type = "";
		this->Id = "";
		this->Status = "";
		addVehicle(this);
	}
	Sea(string _vehicleCode_, string _type_, string _id_, string _status_) 
	{
		//full constructor
		this->VehicleCode = _vehicleCode_;
		this->Type = _type_;
		this->Id = _id_;
		this->Status = _status_;
		addVehicle(this);
	}
	Sea(Sea& other) 
	{
		this->VehicleCode = other.VehicleCode;
		this->Type = other.Type;
		this->Id = other.Id;
		this->Status = other.Status; 
		addVehicle(this);
	}
public:
public:
	string className() { return "SEA"; }
	Vehicle* clone() { return new Sea(*this); }

	
};