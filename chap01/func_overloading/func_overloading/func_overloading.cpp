#include <iostream>
using namespace std;

int MyFunc(int num) {
	num++;
	return num;
}

int MyFunc(int a, int b) {
	return a + b;
}

int main() {
	MyFunc(20);
	MyFunc(30, 40);
	return 0;
}