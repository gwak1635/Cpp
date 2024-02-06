#include <iostream>
#include <algorithm>

bool check(int arr[]) {
    if (arr[5] != 0) return false;
    if ((100 * arr[0] + 10 * arr[1] + arr[2]) % 2 != 0) return false;
    if ((1000 * arr[0] + 100 * arr[1] + 10 * arr[2] + arr[3]) % 3 != 0) return false;
    if ((10000 * arr[0] + 1000 * arr[1] + 100 * arr[2] + 10 * arr[3] + arr[4]) % 4 != 0) return false;
    if ((100000 * arr[0] + 10000 * arr[1] + 1000 * arr[2] + 100 * arr[3] + 10 * arr[4] + arr[5]) % 5 != 0) return false;
    if ((1000000 * arr[0] + 100000 * arr[1] + 10000 * arr[2] + 1000 * arr[3] + 100 * arr[4] + 10 * arr[5] + arr[6]) % 6 != 0) return false;
    if ((10000000 * arr[0] + 1000000 * arr[1] + 100000 * arr[2] + 10000 * arr[3] + 1000 * arr[4] + 100 * arr[5] + 10 * arr[6] + arr[7]) % 7 != 0) return false;
    if ((100000000 * arr[0] + 10000000 * arr[1] + 1000000 * arr[2] + 100000 * arr[3] + 10000 * arr[4] + 1000 * arr[5] + 100 * arr[6] + 10 * arr[7] + arr[8]) % 8 != 0) return false;
  
    return true;
}

int main() {
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    do {
        if (check(arr)) {
            for (int i = 0; i < 10; i++) {
                std::cout << arr[i];
            }
            std::cout << std::endl;
        }
    } while (std::next_permutation(arr, arr+10));
    return 0;
}