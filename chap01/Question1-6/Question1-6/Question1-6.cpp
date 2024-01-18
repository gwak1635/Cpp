#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int Menu();
void MakeAccount();
void InputMoney();
void OutputMoney();
void ShowAccounts();

enum E_MENU { E_MAKE = 1, E_INPUT, E_OUTPUT, E_SHOW, E_EXIT };

struct tagAccount {
	int id;
	string name;
	int value;
};

tagAccount arrayAccount[100];
int nAccount = 0;

int main() {
	bool isOperating = true;
	E_MENU eMenu;

	while (isOperating)
	{
		eMenu = (E_MENU)Menu();
		switch (eMenu)
		{
		case E_MAKE:
			if (nAccount >= 0 && nAccount < 100)
				MakeAccount();
			else
				cout << "���°� ���� �� ���¸� ���� �� �����ϴ�." << endl;
			break;
		case E_INPUT:
			InputMoney();
			break;
		case E_OUTPUT:
			OutputMoney();
			break;
		case E_SHOW:
			ShowAccounts();
			break;
		case E_EXIT:
			cout << "���α׷��� �����մϴ�." << endl;
			isOperating = false;
			break;
		}

	}
	return 0;
}

int Menu() {
	int nSelect;
	do {
		system("cls");
		cout << "-----Menu-----" << endl;
		cout << "1. ���°���" << endl;
		cout << "2. �� ��" << endl;
		cout << "3. �� ��" << endl;
		cout << "4. �������� ��ü ���" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << "����: "; cin >> nSelect;
	} while (nSelect < 1 || nSelect>5);
	return nSelect;
}

void MakeAccount() {
	int nID;
	bool isDuplicated = true;
	while (isDuplicated) {
		system("cls");
		cout << "����ID: "; cin >> nID;
		for (int i = 0; i < nAccount+1; i++)
		{
			if (arrayAccount[i].id == nID) {
				cout << "ID�� �ߺ��Ǿ����ϴ�. �ٽ� �Է��� �ּ���" << endl;
				Sleep(1500);
				break;
			}
			if (i == nAccount)
				isDuplicated = false;
		}
	}
	arrayAccount[nAccount].id = nID;
	cout << "�� ��: "; cin >> arrayAccount[nAccount].name;
	cout << "�� ��: "; cin >> arrayAccount[nAccount].value;
	cout << "���°� �����Ǿ����ϴ�." << endl;
	nAccount++;
	system("pause");
}
void InputMoney() {
	system("cls");
	int nID, nValue;
	cout << "����ID: "; cin >> nID;
	for (int i = 0; i < nAccount; i++)
	{
		if (arrayAccount[i].id == nID) {
			cout << "�Աݾ�: "; cin >> nValue;
			arrayAccount[i].value += nValue;
			cout << "�ԱݿϷ�" << endl;
			system("pause");
			break;
		}
	}

}

void OutputMoney() {
	system("cls");
	int nID, nValue;
	cout << "����ID: "; cin >> nID;
	for (int i = 0; i < nAccount; i++)
	{
		if (arrayAccount[i].id == nID) {
			cout << "��ݾ�: "; cin >> nValue;
			if (nValue >= arrayAccount[i].value) {
				cout << "�ܾ��� �����մϴ�." << endl;
			}
			else {
				arrayAccount[i].value -= nValue;
				cout << "��ݿϷ�" << endl;
			}
		}
		break;
	}
	system("pause");
}

void ShowAccounts() {
	for (int i = 0; i < nAccount; i++)
	{
		cout << "����ID: " << arrayAccount[i].id << endl;
		cout << "�� ��: " << arrayAccount[i].name << endl;
		cout << "�� ��: " << arrayAccount[i].value << endl << endl;
	}
	system("pause");
}