//
// Created by TigerZhao on 2020-09-04.
//


#include <iostream>
#include <algorithm>

using namespace std;

bool isPrime(long n) {
    for (int i = 2; i < min(50000 * 1l, n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        if (n == 1) {
            cout << "FastestFinger" << endl;
        } else if (n == 2) {
            cout << "Ashishgup" << endl;
        }
        else if (n % 2 != 0) {
            cout << "Ashishgup" << endl;
        } else {
            if ((n & (n - 1)) == 0 || (n % 4 != 0 && isPrime(n / 2))) {
                cout << "FastestFinger" << endl;
            } else {
                cout << "Ashishgup" << endl;
            }
        }
    }
    return 0;
}
