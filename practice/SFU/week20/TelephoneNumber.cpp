//
// Created by xyztiger on 2020-10-27.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int length;
        string num;
        cin >> length >> num;
        int l = 0;
        bool count = false;
        for (int i = 0; i < length; i++) {
            if (num[i] == '8') {
                count = true;
            }
            if (count) {
                l++;
            }
        }
        if (l >= 11) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}