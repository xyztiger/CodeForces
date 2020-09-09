//
// Created by TigerZhao on 2020-09-08.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k;
        long p;
        cin >> n >> p >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        long long m = 0;
        if (n == 1) {
            if (p >= a[0]) {
                m++;
            }
        } else {
            long long second = a[0];
            if (p >= second) {
                m = 1;
                long long first = a[1];
                if (p >= first) {
                    m = 2;
                    for (int i = 2; i < n; i++) {
                        long long current = a[i] += second;
                        if (current > p) {
                            m = i;
                            break;
                        } else {
                            second = first;
                            first = current;
                            m = i + 1;
                        }
                    }
                }
            }
        }
        cout << m << endl;
    }
    return 0;
}
