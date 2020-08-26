//
// Created by TigerZhao on 2020-08-25.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        int m;
        bool print = true;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int nb = 4;
                if (i == 0 || i == n - 1) {
                    nb--;
                } if (j == 0 || j == m - 1) {
                    nb--;
                }
                if (a[i][j] > nb) {
                    print = false;
                }
            }
        }
        if (print) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    int nb = 4;
                    if (i == 0 || i == n - 1) {
                        nb--;
                    }
                    if (j == 0 || j == m - 1) {
                        nb--;
                    }
                    cout << nb << " ";
                }
                cout << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}