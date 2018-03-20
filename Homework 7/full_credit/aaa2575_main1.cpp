#include <iostream>

#include "aaa2575_Super_Arm.h"
#include "aaa2575_Mobile_Arm.h"

using namespace std;

int main() 
{
	Super_Arm superR {1, "Sparky", 100, 10, 5, 5, 15, "Super_Arm"};
	Mobile_Arm mobileR {2, "Wall-e", 100, 10, 5, 5, 15, "mobileR_Arm"};

	superR.move(2, 2);
	superR.Powered_Arm::pick_up(3);
	superR.move(3, 3);
	superR.Powered_Arm::drop();
	cout << endl;

	superR.move(2, 2);
	superR.Powered_Arm::pick_up(2);
	superR.move(8, 8);
	superR.Powered_Arm::drop();
	cout << endl;

	superR.move(4, 4);
	superR.Powered_Arm::pick_up(12);
	superR.move(3, 3);
	superR.Powered_Arm::drop();
	cout << endl;

	superR.move(4, 4);
	superR.Powered_Arm::pick_up(12);
	superR.move(8, 8);
	superR.Powered_Arm::drop();
	cout << endl;

	cout << "Successful cases" << endl;
	cout << "================" << endl << endl;
	mobileR.move(2, 2, 7, 2);
	mobileR.move(3, 3, 3, 1, 1);
	cout << endl;

	cout << "Unsuccessful CASES" << endl;
	cout << "==================" << endl << endl;
	mobileR.move(330, 330, 100, 100);
	mobileR.move(6, 6, 100, 100);
	cout << endl;

	return 0;
}