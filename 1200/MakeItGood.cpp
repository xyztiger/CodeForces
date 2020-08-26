//
// Created by TigerZhao on 2020-08-25.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int prev = 0;
        bool down = false;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] < prev) {
                down = true;
            } if (a[i] > prev && down) {
                cout << i + 1 << endl;
                break;
            } if (i == 0) {
                cout << 0 << endl;
                break;
            }
            prev = a[i];
        }

    }
    return 0;
}