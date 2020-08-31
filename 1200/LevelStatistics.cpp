//
// Created by TigerZhao on 2020-08-30.
//


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p, c;
        int pp = 0;
        int pc = 0;
        bool messed = false;
        cin >> n;
        while (n--) {
            cin >> p >> c;
            if (pp > p || pc > c || p - pp < c - pc) {
                messed = true;
            }
            pp = p;
            pc = c;
        }
        if (messed) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
