#include<iostream>
using namespace std;

namespace CAR_CONST
{
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct tagCar {
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState();
	void Accel();
	void Break();
};

void tagCar::ShowCarState() {
	cout << "������ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
}

void tagCar::Accel() {
	if (fuelGauge <= 0) {
		return;
	}
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
		curSpeed = CAR_CONST::MAX_SPD;
	}
	else {
		curSpeed += CAR_CONST::ACC_STEP;
	}

}
void tagCar::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP) {
		curSpeed = 0;
	}
	else {
		curSpeed -= CAR_CONST::BRK_STEP;
	}

}


int main() {
	tagCar run99 = { "run99",100,0 };
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}