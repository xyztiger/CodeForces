//
// Created by xyztiger on 2020-09-29.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int m;
    cin >> s >> m;
    long l, r, k;
    string result = s;
    while (m--) {
        cin >> l >> r >> k;
        k = k % (r - l + 1);
        for (int i = l; i <= r; i++) {
            if (i + k > r) {
                result[i + k - r + l - 2] = s[i - 1];
            } else {
                result[i + k - 1] = s[i - 1];
            }
        }
        s = result;
    }
    cout << result << endl;
    return 0;
}