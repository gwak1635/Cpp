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
				cout << "계좌가 가득 차 계좌를 만들 수 없습니다." << endl;
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
			cout << "프로그램을 종료합니다." << endl;
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
		cout << "1. 계좌개설" << endl;
		cout << "2. 입 금" << endl;
		cout << "3. 출 금" << endl;
		cout << "4. 계좌정보 전체 출력" << endl;
		cout << "5. 프로그램 종료" << endl;
		cout << "선택: "; cin >> nSelect;
	} while (nSelect < 1 || nSelect>5);
	return nSelect;
}

void MakeAccount() {
	int nID;
	bool isDuplicated = true;
	while (isDuplicated) {
		system("cls");
		cout << "계좌ID: "; cin >> nID;
		for (int i = 0; i < nAccount+1; i++)
		{
			if (arrayAccount[i].id == nID) {
				cout << "ID가 중복되었습니다. 다시 입력해 주세요" << endl;
				Sleep(1500);
				break;
			}
			if (i == nAccount)
				isDuplicated = false;
		}
	}
	arrayAccount[nAccount].id = nID;
	cout << "이 름: "; cin >> arrayAccount[nAccount].name;
	cout << "잔 액: "; cin >> arrayAccount[nAccount].value;
	cout << "계좌가 개설되었습니다." << endl;
	nAccount++;
	system("pause");
}
void InputMoney() {
	system("cls");
	int nID, nValue;
	cout << "계좌ID: "; cin >> nID;
	for (int i = 0; i < nAccount; i++)
	{
		if (arrayAccount[i].id == nID) {
			cout << "입금액: "; cin >> nValue;
			arrayAccount[i].value += nValue;
			cout << "입금완료" << endl;
			system("pause");
			break;
		}
	}

}

void OutputMoney() {
	system("cls");
	int nID, nValue;
	cout << "계좌ID: "; cin >> nID;
	for (int i = 0; i < nAccount; i++)
	{
		if (arrayAccount[i].id == nID) {
			cout << "출금액: "; cin >> nValue;
			if (nValue >= arrayAccount[i].value) {
				cout << "잔액이 부족합니다." << endl;
			}
			else {
				arrayAccount[i].value -= nValue;
				cout << "출금완료" << endl;
			}
		}
		break;
	}
	system("pause");
}

void ShowAccounts() {
	for (int i = 0; i < nAccount; i++)
	{
		cout << "계좌ID: " << arrayAccount[i].id << endl;
		cout << "이 름: " << arrayAccount[i].name << endl;
		cout << "잔 액: " << arrayAccount[i].value << endl << endl;
	}
	system("pause");
}