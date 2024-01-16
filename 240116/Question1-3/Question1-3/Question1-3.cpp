#include<iostream>
using namespace std;

int BoxVolume(int length) {
	return length;
}
int BoxVolume(int length, int width) {
	return length * width;
}
int BoxVolume(int length, int width, int height) {
	return length * width * height;
}

void Q1() {
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
}

int SimpleFunc(int a = 10) {
	return a + 1;
}

int main() {
	Q1();
	return 0;
}