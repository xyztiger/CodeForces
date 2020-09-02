//
// Created by TigerZhao on 2020-09-01.
//


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool possible = true;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (a[i][j] == '1') {
                    if (a[i + 1][j] != '1' && a[i][j + 1] != '1') {
                        possible = false;
                    }
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
