//
// Created by xyztiger on 2020-09-29.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    long double n;
    long long sum = 0;
    while (t--) {
        cin >> n;
        sum = n * (n + 1) / 2;
        for (double i = 1; i <= n; i *= 2) {
            sum -= 2*i;
        }
        cout << sum << endl;
    }
    return 0;
}