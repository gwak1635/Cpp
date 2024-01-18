#include <iostream>
using namespace std;

void q1() {
	int a;
	int sum= 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << "번째 정수 입력: ";
		cin >> a;
		sum += a;
	}
	cout << "합계: " << sum;
}

void q2() {
	char name[100];
	char address[100];
	cout << "이름 : ";
	cin >> name;
	cout << "전화번호 : ";
	cin >> address;
	
	cout << "이름은 " << name << "이며, 전화번호는 " << address << "이다." << endl;
}

void q3() {
	int input;
	cout << "입력할 단 수를 입력하새오: ";
	cin >> input;

	for (int i = 1; i <= 9; i++)
	{
		cout << input << " * " << i << " = " << input * i << endl;
	}
}

void q4() {
	int input;
	while (true) {
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> input;
		if (input == -1) {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else {
			int result = 50 + input * 0.12;
			cout << "이번 달 급여: " << result << "만원" << endl;
		}

	}
}

int main() {
	q4();
	return 0;
}