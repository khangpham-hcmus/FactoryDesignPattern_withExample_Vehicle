#pragma once
#include"Vehicle.h"
#include"Sea.h"
#include"Train.h"
#include"Truck.h"
#include"VehicleFactory.h"
class Menu {
public:
	static void Show() {
		cout << "=========================================================" << endl;
		cout << "====================TypeOfProduct========================" << endl;
		cout << "1.BOX" << endl;
		cout << "2.CONTAINER" << endl;
		cout << "====================Location=============================" << endl;
		cout << "1.LOCAL" << endl;
		cout << "2.GLOBAL" << endl;
		cout << "=========================================================" << endl;	
	}
};