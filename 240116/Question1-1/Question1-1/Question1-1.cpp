#include <iostream>
using namespace std;

void q1() {
	int a;
	int sum= 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << "��° ���� �Է�: ";
		cin >> a;
		sum += a;
	}
	cout << "�հ�: " << sum;
}

void q2() {
	char name[100];
	char address[100];
	cout << "�̸� : ";
	cin >> name;
	cout << "��ȭ��ȣ : ";
	cin >> address;
	
	cout << "�̸��� " << name << "�̸�, ��ȭ��ȣ�� " << address << "�̴�." << endl;
}

void q3() {
	int input;
	cout << "�Է��� �� ���� �Է��ϻ���: ";
	cin >> input;

	for (int i = 1; i <= 9; i++)
	{
		cout << input << " * " << i << " = " << input * i << endl;
	}
}

void q4() {
	int input;
	while (true) {
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> input;
		if (input == -1) {
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
		else {
			int result = 50 + input * 0.12;
			cout << "�̹� �� �޿�: " << result << "����" << endl;
		}

	}
}

int main() {
	q4();
	return 0;
}