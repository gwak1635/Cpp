#include <iostream>
using namespace std;

int main() {
	char name[50];
	char lang[25];

	cout << "�̸��� �����Դϱ�? ";
	cin >> name;

	cout << "�����ϴ� ���α׷��� ���� �����ΰ���? ";
	cin >> lang;

	cout << "�� �̸��� " << name << "�Դϴ�." << endl;
	cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << endl;

	return 0;
}