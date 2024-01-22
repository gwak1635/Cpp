#include<iostream>
using namespace std;

int main() {
	const int num = 12;
	const int* pA = &num;
	const int& a = num;
	cout << num << *pA<<a<<endl;
}