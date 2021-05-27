#include"Vehicle.h"
vector<Vehicle*> Vehicle::VehicleList;

void Vehicle::addVehicle(Vehicle* objectVehicle)
{
	if (objectVehicle == nullptr)
		return;

	int index = VehicleList.size();
	while (--index >= 0)
	{
		Vehicle* o = VehicleList[index];
		if (o->className() == objectVehicle->className())
			return;
	}
	VehicleList.push_back(objectVehicle);
}

Vehicle* Vehicle::createVehicle(char cTypeOfProduct, char cLocation)
{
	vector<Vehicle*>::iterator it = VehicleList.begin();
	for (it; it != VehicleList.end(); ++it) {
		if ((*it)->getStatus() == "FREE") {
			if (cTypeOfProduct == '1' && cLocation == '1' && (*it)->className() == "TRUCK")
				return (*it)->clone();
			else if (cTypeOfProduct == '2' && cLocation == '1' && (*it)->className() == "TRAIN")
				return (*it)->clone();
			else if (cTypeOfProduct == '2' && cLocation == '2' && (*it)->className() == "SEA")
				return (*it)->clone();
		}
	}
	return nullptr;
}
