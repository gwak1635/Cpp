#include <iostream>

using namespace std;

int main() {
    long long a;
    cin >> a;
    a+=5;
    a /= 6;
    cout << a << endl;
    int count = 0;

    while (a > 0) {
        a -= count;
        count++;
    }



    cout << count << endl;

    //0 6 18 36 60
    //ù°���� 0�̰� 1 3 6 10 
    // 1 2 3 4

    return 0;
}