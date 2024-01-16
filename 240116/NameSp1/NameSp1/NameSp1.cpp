#include <iostream>
using namespace std;

namespace BestComInpl {
	void SimpleFunc() {
		cout << "BestCom이 정의한 함수" << endl;
	}
}

namespace ProgComInpl {
	void SimpleFunc() {
		cout << "ProgCom이 정의한 함수" << endl;
	}
}

int main() {
	BestComInpl::SimpleFunc();
	ProgComInpl::SimpleFunc();
}