#include<iostream>
using namespace std;

void Add(int& num) {
	num++;
}

void Revert(int& num) {
	num *= -1;
}

void Q1() {
	int num = 10;
	cout << "num: " << num << endl;
	Add(num);
	cout << "num: " << num << endl;
	Revert(num);
	cout << "num: " << num << endl;
}

void SwapPointer(int* (&ptr1), int* (&ptr2)) {
	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

void Q2() {
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;
	SwapPointer(ptr1, ptr2);
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
}
int main() {
	Q2();
	return 0;
}