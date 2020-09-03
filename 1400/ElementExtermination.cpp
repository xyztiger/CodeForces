//
// Created by TigerZhao on 2020-09-02.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, first, last;
        cin >> n >> first;
        while (--n) {
            cin >> last;
        }
        cout << (first < last ? "YES" : "NO") << endl;
    }
    return 0;
}
