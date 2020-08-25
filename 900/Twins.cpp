//
// Created by TigerZhao on 2020-08-24.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int coins[n];
    int total = 0;
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        total += coins[i];
    }

    sort(coins, coins + n);
    while (sum <= total / 2) {
        sum += coins[n - 1 - count];
        count++;
    }
    cout << count << endl;

    return 0;
}