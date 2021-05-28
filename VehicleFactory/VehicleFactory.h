#pragma once
#include"Sea.h"
#include"Train.h"
#include"Vehicle.h"
#include"Truck.h"
class VehicleFactory {
public:
	static Vehicle* getVehicle(vector<Vehicle*> VEHICLES_IN_COMPANY, char cTypeOfProduct, char cLocation) {
		for (auto i : VEHICLES_IN_COMPANY) {
			if (i->getStatus() == "FREE") {
				if (cTypeOfProduct == '1' && cLocation == '1' && i->className() == "TRUCK")
					return i->clone();
				else if (cTypeOfProduct == '2' && cLocation == '1' && i->className() == "TRAIN")
					return i->clone();
				else if (cTypeOfProduct == '2' && cLocation == '2' && i->className() == "SEA")
					return i->clone();
			}
		}
		return nullptr;
	}
};