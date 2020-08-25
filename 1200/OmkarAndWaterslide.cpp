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
        cin >> n;
        long long a[n];
        long long sum = 0;
        long long prev = 0;
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] < prev) {
                sum += prev - a[i];
            }
            prev = a[i];
        }
        cout << sum << endl;
    }

    return 0;
}