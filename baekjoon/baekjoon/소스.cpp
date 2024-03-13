#include<iostream>
using namespace std;

int bunhaehap(int num) {
    int bhh = 0;
    int temp = num;

    for (int i = 6; i >= 0; i--) {
        int b = 1;
        for (int j = 0; j < i; j++) {
            b *= 10;
        }
        bhh += temp / b;
        temp %= b;
    }
    
    return (bhh + num);
}

int main() {
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        if (bunhaehap(i) == a) {
            cout << i << endl;
            break;
        }
        if (i == a) {
            cout << 0 << endl;
            break;
        }
    }

    return 0;
}