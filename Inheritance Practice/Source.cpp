#include "MotorCycle.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

int main()
{
	MotorCycle myMotorcycle;
	MotorCycle yourMotorcycle("Harley","Sportster",2000,50);
	cout << myMotorcycle << endl;
	cout << yourMotorcycle << endl;

}