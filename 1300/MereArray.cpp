//
// Created by TigerZhao on 2020-08-31.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        bool possible = true;
        int n;
        long smallest = LONG_MAX;
        cin >> n;
        long sorted[n];
        long unsorted[n];
        for (int i = 0; i < n; i++) {
            cin >> sorted[i];
            unsorted[i] = sorted[i];
            smallest = min(sorted[i], smallest);
        }
        sort(sorted, sorted + n);
        for (int i = 0; i < n; i++) {
            if (unsorted[i] % smallest != 0 && unsorted[i] != sorted[i]) {
                possible = false;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
