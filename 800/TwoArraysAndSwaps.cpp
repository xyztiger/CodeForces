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
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        int sum = 0;
        for (int i = n - 1; i >= k; i--) {
            sum += a[i];
        }
        int i = k - 1;
        int j = n - 1;
        while (k--) {
            if (a[i] >= b[j]) {
                sum += a[i];
                i--;
            } else {
                sum += b[j];
                j--;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
