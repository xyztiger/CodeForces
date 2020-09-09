//
// Created by TigerZhao on 2020-09-08.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    long a[n];
    long long k[q];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> k[i];
    }
    long long totalHealth[n + 1];
    totalHealth[0] = 0;
    for (int i = 1; i <= n; i++) {
        totalHealth[i] = totalHealth[i - 1] + a[i - 1];
    }
    int l = 0;
    int r = n;
    long long target = 0;
    long long index = 1;
    for (int i = 0; i < q; i++) {
        if (l == 0) {
            target = k[i];
        } else {
            target += k[i];
        }
        while (l <= r) {
            int mid = (l + r) / 2;
            if (totalHealth[mid] > target) {
                r = mid - 1;
            } else {
                index = mid;
                l = mid + 1;
            }
        }
        if (index == n) {
            cout << n << endl;
            l = 0;
            r = n;
        } else {
            cout << n - index << endl;
            l = index;
            r = n;
        }
    }
    return 0;
}
