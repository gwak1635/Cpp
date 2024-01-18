#include<iostream>
using namespace std;

namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1, num2;
		}
	}
}

int main() {
	namespace ABC = AAA::BBB::CCC;

	AAA::BBB::CCC::num1 = 20;
	ABC::num2 = 30;

	cout << "AAA::BBB::CCC::num1 = " << AAA::BBB::CCC::num1 << endl;
	cout << "ABC::num2 = " << ABC::num2 << endl;

	return 0;

}