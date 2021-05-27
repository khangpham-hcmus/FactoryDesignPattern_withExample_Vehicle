#include"ManageFilesHeaders.h"
int main() {
	//Some example vehicles in the company:
	Menu::Show();
	Truck truck1("truck", "truck_vehicle", "01", "FREE");
	Truck truck2("truck", "truck_vehicle", "02", "BUSY");
	Sea sea1("sea", "sea_vehicle", "03", "FREE");
	Sea sea2("sea", "sea_vehicle", "04", "BUSY");
	Train train1("train", "train_vehicle", "05", "FREE");
	Train train02("train", "train_vehicle", "06", "BUSY");
	char cTypeOfProduct, cLocation;
	cout << "Input type of product: ";
	cin >> cTypeOfProduct;
	cout << "Input location: ";
	cin >> cLocation;
	cout << "=========================================================" << endl;
	Vehicle* vhc = Vehicle::createVehicle(cTypeOfProduct, cLocation);
	if (vhc != nullptr)
		cout << "The suitable vehicle is: " << vhc->className() <<"."<< endl;
	else
		cout << "There is no suitable vehicle for transport.\n";
	
	return 0;
}