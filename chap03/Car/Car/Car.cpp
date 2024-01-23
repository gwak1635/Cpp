#include<iostream>
#include "Car.h"
#include<cstring>
using namespace std;

void Car::InitMembers(const char* ID, int fuel) {
	strcpy_s(gamerID, CAR_CONST::ID_LEN, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState() {
	cout << "������ID: " << gamerID << endl;
	cout << "���ᷮ:" << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel() {
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
		curSpeed = CAR_CONST::MAX_SPD;
	}
	else {
		curSpeed += CAR_CONST::ACC_STEP;
	}
}
void Car::Break() {
	if ((curSpeed - CAR_CONST::BRK_STEP) <= 0) {
		curSpeed = 0;
	}
	else {
		curSpeed -= CAR_CONST::BRK_STEP;
	}
}