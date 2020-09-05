//
// Created by TigerZhao on 2020-09-04.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<vector<long long>> dp(n, vector<long long>(2));
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    if (n == 1) {
        cout << max(a[0], b[0]) << endl;
        return 0;
    }
    dp[1][0] = a[1] + b[0];
    dp[1][1] = b[1] + a[0];
    for (int i = 2; i < n; i ++) {
        dp[i][0] = max(a[i] + dp[i - 1][1], a[i] + dp[i - 2][1]);
        dp[i][1] = max(b[i] + dp[i - 1][0], b[i] + dp[i - 2][0]);
    }
    cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;
    return 0;
}
