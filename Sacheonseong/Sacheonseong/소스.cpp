#include <iostream>
using namespace std;

//��õ�� ����
//1. ���� �� �����ϰ� ����ϱ�


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

