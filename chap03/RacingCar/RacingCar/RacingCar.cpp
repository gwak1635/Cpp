#include <iostream>
using namespace std;

#define ID_LEN		20
#define MAX_SPEED	200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car {
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
	void ShowCarState() {
		cout << "������ID: " << gamerID << endl;
		cout << "���ᷮ: " << fuelGauge << "%" << endl;
		cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
	}

	void Accel() {
		if (fuelGauge <= 0) {
			return;
		}
		else
			fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPEED) {
			curSpeed = MAX_SPEED;
		}
		else {
			curSpeed += ACC_STEP;
		}

	}
	void Break() {
		if (curSpeed < BRK_STEP) {
			curSpeed = 0;
		}
		else {
			curSpeed -= BRK_STEP;
		}

	}
};



int main() {
	Car run99 = { "run99",100,0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car run77 = { "run77",100,0 };
	run77.Accel();
	run77.Break();
	run77.ShowCarState();

	return 0;
}