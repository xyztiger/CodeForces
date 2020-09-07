//
// Created by TigerZhao on 2020-09-06.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long w[k];
        long assignment[k][2];
        for (int i = 0; i < k; i++) {
            cin >> w[i];
            assignment[i][0] = LONG_MIN;
            assignment[i][1] = LONG_MAX;
        }
        sort(a, a + n);
        sort(w, w + k);
        int j = 0;
        for (int i = n - 1; i >= 0; i--) {
            while (w[j] == 0) {
                if (j == k -1) {
                    j = 0;
                } else {
                    j++;
                }
            }
            assignment[j][0] = max(assignment[j][0], a[i]);
            assignment[j][1] = min(assignment[j][1], a[i]);
            w[j]--;
            if (j == k - 1) {
                j = 0;
            } else {
                j++;
            }
        }
        long long answer = 0;
        for (int i = 0; i < k; i++) {
            answer += assignment[i][0];
            answer += assignment[i][1];
        }
        cout << answer << endl;
    }
    return 0;
}
