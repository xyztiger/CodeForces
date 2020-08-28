//
// Created by TigerZhao on 2020-08-27.
//

#include <iostream>

using namespace std;

int digit(long long n, string choice) {
    int largest = 0;
    int smallest = 9;
    while (n) {
        int r = n % 10;
        largest = max(r, largest);
        smallest = min(r, smallest);
        n = n / 10;
    }
    if (choice == "max") {
        return largest;
    } else {
        return smallest;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a1;
        long long k;
        cin >> a1 >> k;
        if (k == 1) {
            cout << a1 << endl;
        } else {
            k--;
            while (k--) {
                if (digit(a1, "min") == 0) {
                    break;
                }
                a1 = a1 + digit(a1, "max") * digit(a1, "min");
            }
            cout << a1 << endl;
        }
    }
    return 0;
}