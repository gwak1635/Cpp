#include <iostream>
using namespace std;

namespace Hybrid {
	void HybFunc() {
		cout << "So simple Function" << endl;
		cout << "In namespace Hybrid!" << endl;
	}
}

int main() {
	using Hybrid::HybFunc;
	HybFunc();
}