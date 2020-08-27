//
// Created by TigerZhao on 2020-08-26.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        int x;
        cin >> n >> x;
        int a[n];
        int remainders = 0;
        int first;
        int last = '\0';
        bool possible = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % x != 0) {
                if (!possible) {
                    first = i;
                }
                possible = true;
                last = i;
            }
            remainders += a[i] % x;
        }
        if (possible) {
            if (remainders % x == 0) {
                if ((first + 1) < (n - last)) {
                    cout << sizeof(a)/sizeof(a[0]) - first - 1 << endl;
                } else {
                    cout << sizeof(a)/sizeof(a[0]) - (n - last) << endl;
                }
            } else {
                cout << sizeof(a)/sizeof(a[0]) << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}