#include <iostream>
using namespace std;

class FruitSeller {
private:
	const int APPLE_PRICE = 1000;
	int numOfApples;
	int myMoney;
public:
	void InitMembers(int num, int money) {
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() {
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl;
	}
};

int main() {
	FruitSeller frs;
	frs.InitMembers(6, 100);
	frs.ShowSalesResult();
	return 0;
}