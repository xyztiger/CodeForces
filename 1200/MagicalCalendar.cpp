//
// Created by TigerZhao on 2020-08-25.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        long long r;
        cin >> n >> r;
        long long total = 0;
        if (r < n) {
            total = r * (r + 1) / 2;
        } else {
            total = n * (n - 1) / 2 + 1;
        }
        cout << total << endl;
    }

    return 0;
}