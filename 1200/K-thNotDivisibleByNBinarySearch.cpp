//
// Created by TigerZhao on 2020-08-28.
//


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        long k;
        cin >> n >> k;
        long long L = 1;
        long long R = LONG_MAX;
        long long mid = (L + R) / 2;
        while (k != mid - mid/n) {
            if (k > mid - mid/n) {
                L = mid;
                mid = (mid + R) / 2;
            } else {
                R = mid;
                mid = (L + mid) / 2;
            }
        }
        if (mid % n == 0) {
            cout << mid - 1 << endl;

        } else {
            cout << mid << endl;
        }
    }
    return 0;
}
