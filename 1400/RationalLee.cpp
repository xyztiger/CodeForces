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
        int used = 0;
        for (int i = 0; i < k; i++) {        //assign largest numbers to each friend
            w[i]--;
            assignment[i][0] = max(assignment[i][0], a[n - 1 - i]);
            assignment[i][1] = min(assignment[i][1], a[n - 1 - i]);
            used++;
        }
        int j = k - 1;
        for (int i = 0; i < n - used; i++){
            if (w[j] == 0) {
                j--;
            }
            assignment[j][1] = min(assignment[j][1], a[i]);
            w[j]--;
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
