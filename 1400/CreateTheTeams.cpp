//
// Created by TigerZhao on 2020-09-02.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int dp[2] = {1, 0};
        for (int i = n - 1; i >= 0; i--) {
            if (dp[0] * a[i] >= x) {
                dp[1]++;
                dp[0] = 1;
            } else {
                dp[0]++;
            }
        }
        cout << dp[1] << endl;
    }
    return 0;
}
