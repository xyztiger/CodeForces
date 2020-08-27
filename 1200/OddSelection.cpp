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
        int odds = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 != 0) {
                odds++;
            }
        }
        if (odds == 0) {
            cout << "No" << endl;
        } else if (odds == n && x % 2 == 0) {
            cout << "No" << endl;
        } else if (odds % 2 == 0 && x == n) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}