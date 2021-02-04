//
// Created by xyztiger on 2020-09-29.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<int> toCheck;
    for (int i = 0; i < n; i++) {
        sort(matrix[i], matrix[i] + m); // all streets sorted
        toCheck.emplace_back(i);
    }
    long long msf = 0;
    for (int i : toCheck) {
        if (matrix[i][0] > msf) {
            msf = matrix[i][0];
        }
    }
    cout << msf << endl;

    return 0;
}