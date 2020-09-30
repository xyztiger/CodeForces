//
// Created by xyztiger on 2020-09-29.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int initial[n];
    for (int i = 0; i < n; i++) {
        cin >> initial[i];
    }
    sort(initial, initial + n);
    int answer[n];
    int j = -1;
    for (int i = 0; i < n; i += 2) {
        j++;
        answer[i] = initial[j];
    }
    int end;
    if (n % 2 == 0) {
        end = n - 1;
    } else {
        end = n - 2;
    }
    for (int i = end; i > 0; i -= 2) {
        j++;
        answer[i] = initial[j];
    }
    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}