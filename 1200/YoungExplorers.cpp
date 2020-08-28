//
// Created by TigerZhao on 2020-08-27.
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
        int e[n];
        for (int i = 0; i < n; i++) {
            cin >> e[i];
        }
        sort(e, e + n);
        int current = 0;
        int groups = 0;
        for (int i = 0; i < n; i++) {
            if (++current == e[i]) {
                current = 0;
                groups++;
            }
        }
        cout << groups << endl;
    }

    return 0;
}