//
// Created by TigerZhao on 2020-09-13.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long sum = 0;
        for (long long i = 1; i < n; i += 2) {
            sum += (n - i) * (n - i);
        }
        cout << 2 * sum << endl;
    }
    return 0;
}
