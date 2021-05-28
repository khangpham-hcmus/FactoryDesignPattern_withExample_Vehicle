#include"ManageFilesHeaders.h"
int main() {
	//Some example vehicles in the company:
	Menu::Show();
	Truck truck1("truck", "truck_vehicle", "01", "FREE");
	Truck truck2("truck", "truck_vehicle", "02", "BUSY");
	Sea sea1("sea", "sea_vehicle", "03", "FREE");
	Sea sea2("sea", "sea_vehicle", "04", "BUSY");
	Train train1("train", "train_vehicle", "05", "FREE");
	Train train2("train", "train_vehicle", "06", "BUSY");
	//Input data for create Vehicles:
	char cTypeOfProduct, cLocation;
	cout << "Input type of product: ";
	cin >> cTypeOfProduct;
	cout << "Input location: ";
	cin >> cLocation;
	cout << "=========================================================" << endl;
	Vehicle* vhc = nullptr;
	//vhc=Vehicle::createVehicle(cTypeOfProduct, cLocation);//can run here
	//
	//
	vector<Vehicle*> ds = { &truck1,&truck2,&train1,&train2,&sea1,&sea2 };
	vhc = VehicleFactory::getVehicle(ds, cTypeOfProduct, cLocation);
	if (vhc != nullptr)
		cout << "The suitable vehicle is: " << vhc->getINFO() << "." << endl;
	else
		cout << "There is no suitable vehicle for transport.\n";
	//
	//
	return 0;
}