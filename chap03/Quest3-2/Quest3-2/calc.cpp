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
		cout << "¿À·ù: 0À¸·Î ³ª´­ ¼ö ¾ø½À´Ï´Ù." << endl;
	}
}
void Calculator::ShowOpCount() {
	cout << "µ¡¼À: " << plus << " »¬¼À: " << minus << " °ö¼À: " << times << " ³ª´°¼À: " << divides << endl;
}