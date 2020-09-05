//
// Created by TigerZhao on 2020-09-04.
//


#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<long long> dp(size(s) + 1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 0; i < size(s) + 1; i++) {
        if (s[i] == 'm' || s[i] == 'w') {
            cout << 0 << endl;
            return 0;
        } else if (i > 1) {
            dp[i] = dp[i - 1];
            if (s[i - 1] == s[i - 2] && (s[i - 1] == 'u' || s[i - 1] == 'n')) {
                dp[i] = (dp[i] + dp[i - 2]) % ((long long) pow(10, 9) + 7);
            }
        }
    }
    cout << dp[size(s)] << endl;
    return 0;
}
