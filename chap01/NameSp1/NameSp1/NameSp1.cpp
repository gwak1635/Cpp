#include <iostream>
using namespace std;

namespace BestComInpl {
	void SimpleFunc() {
		cout << "BestCom�� ������ �Լ�" << endl;
	}
}

namespace ProgComInpl {
	void SimpleFunc() {
		cout << "ProgCom�� ������ �Լ�" << endl;
	}
}

int main() {
	BestComInpl::SimpleFunc();
	ProgComInpl::SimpleFunc();
}