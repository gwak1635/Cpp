#include <iostream>
using namespace std;

int main() {
	char name[50];
	char lang[25];

	cout << "이름은 무엇입니까? ";
	cin >> name;

	cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	cin >> lang;

	cout << "내 이름은 " << name << "입니다." << endl;
	cout << "제일 좋아하는 언어는 " << lang << "입니다." << endl;

	return 0;
}