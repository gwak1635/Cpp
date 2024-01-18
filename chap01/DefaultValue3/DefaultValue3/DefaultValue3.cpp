#include<iostream>
using namespace std;

int BoxVolume(int length, int width = 1, int height = 1);//반드시 매개변수의 디폴트 값은 오른쪽부터 선언할 것!

int main() {
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5,5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	//cout << "[D, D, D] : " << BoxVolume() << endl; 컴파일 에러(매개변수 1개는 필요함)
	return 0;
}

int BoxVolume(int length, int width, int height) {
	return length * width * height;
}