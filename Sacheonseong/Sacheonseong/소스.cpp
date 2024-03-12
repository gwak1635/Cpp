#include <iostream>
using namespace std;

//사천성 게임
//1. 마작 패 구현하고 출력하기


int main() {
	int filed[8][17] = { 0, };
	int tile = 1;
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 17; j++)
		{
			if (count < 3) {
				tile++;
				count = 0;
			}
				
		}
	}
}

