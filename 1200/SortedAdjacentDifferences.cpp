//
// Created by TigerZhao on 2020-08-30.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n % 2 != 0) {
            cout << a[(n - 1) / 2] << ' ';
            for (int i = ((n - 1) / 2) - 1; i >= 0; i--) {
                cout << a[i] << ' ' << a[n - 1 - i] << ' ';
            }
        } else {
            for (int i = (n - 1) / 2; i >= 0; i--) {
                cout << a[i] << ' ' << a[n - 1 - i] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
