//
// Created by TigerZhao on 2020-09-13.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n, m;
        cin >> n >> m;
        if (n == 1) {
            cout << 0 << endl;
        } else if (n == 2) {
            cout << m << endl;
        } else {
            cout << 2 * m << endl;
        }
    }
    return 0;
}
