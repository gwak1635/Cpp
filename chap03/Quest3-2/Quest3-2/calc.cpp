#include"calc.h"
#include<iostream>
using namespace std;

void Calculator::Init() {
	plus = 0;
	minus = 0;
	times = 0;
	divides = 0;
}
double Calculator::Add(double a, double b) {
	plus++;
	return a + b;
}
double Calculator::Min(double a, double b) {
	minus++;
	return a - b;
}
double Calculator::Tim(double a, double b) {
	times++;
	return a * b;
}
double Calculator::Div(double a, double b) {
	if (b != 0) {
		divides++;
		return a / b;
	}
	else {
		cout << "����: 0���� ���� �� �����ϴ�." << endl;
	}
}
void Calculator::ShowOpCount() {
	cout << "����: " << plus << " ����: " << minus << " ����: " << times << " ������: " << divides << endl;
}