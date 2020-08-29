//
// Created by TigerZhao on 2020-08-28.
//


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n, k;
        cin >> n >> k;
        long avg = n / k;
        long remainder = n % k;
        if ((n % 2 != 0 && k % 2 == 0) || n < k) {
            cout << "NO" << endl;
        } else if (avg * k == n) {
            cout << "YES" << endl;
            while (k--) {
                cout << avg << ' ';
            }
            cout << endl;
        } else {
            if (remainder % 2 != 0) {
                if (avg - 1 < 1) {
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                    cout << avg + remainder << ' ';
                    int i = 1;
                    while (--k) {
                        cout << avg + i << ' ';
                        i = -i;
                    }
                    cout << endl;
                }
            } else {
                cout << "YES" << endl;
                cout << avg + remainder << ' ';
                while (--k) {
                    cout << avg << ' ';
                }
                cout << endl;
            }
        }
    }
    return 0;
}
