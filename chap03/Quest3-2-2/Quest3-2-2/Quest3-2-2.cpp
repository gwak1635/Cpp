#include<iostream>
#include<cstring>
using namespace std;

class Printer {
private:
	char str[100];
public:
	void SetString(const char* input);
	void ShowString();
};

void Printer::SetString(const char* input) {
	strcpy_s(str, sizeof(str), input);
}

void Printer::ShowString() {
	cout << str << endl;
}

int main() {
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}