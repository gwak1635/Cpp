#include<cstring>
#include<ctime>
#include<cstdlib>
#include<iostream>
using namespace std;

void Q1() {
	char str1[] = "ABC 123 ";
	char str2[] = "DEF 456 ";
	char str3[50];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy_s(str3, sizeof(str3), str1);
	strcat_s(str3, sizeof(str3), str2);
	cout << str3 << endl;

	if (strcmp(str1, str2) == 0) {
		cout << "�� ���ڿ��� ����." << endl;
	}
	else
		cout << "���ڿ��� ���� �ʴ�." << endl;

}

void Q2() {
	srand((unsigned)time(NULL));
	rand();

	int	nArray[5];
	for (int i = 0; i < 5; i++)
	{
		nArray[i] = rand() % 100;
		cout << nArray[i] << endl;
	}
}

int main() {
	Q2();
	return 0;
}