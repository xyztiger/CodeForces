//
// Created by xyztiger on 2020-10-27.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, s;
    cin >> m >> s;
    if (s == 0) {
        cout << -1 << " " << -1 << endl;
    } else {
        string maximum, minimum;
        for (int i = 0; i < s / 9; i++) {
            maximum += to_string(9);
        }
        maximum += to_string(s % 9);
        while (maximum.length() < m) {
            maximum += '0';
        }
        if (m > 2) {
            if (s % 9 != 0) {
                minimum = "1";
                while (minimum.length() < (m - s / 9 - 1)) {
                    minimum += '0';
                }
                minimum += to_string(s % 9 - 1);
                for (int i = 0; i < s / 9; i++) {
                    minimum += to_string(9);
                }
            } else {
                minimum = "1";
                while (minimum.length() < (m - s / 9)) {
                    minimum += '0';
                }
                minimum += '8';
                for (int i = 0; i < s / 9 - 1; i++) {
                    minimum += to_string(9);
                }
            }
        } else if (s % 9 != 0){
            minimum += maximum[1];
            minimum += maximum[0];
        } else {
            minimum = "1";
            while (minimum.length() < (m - s / 9 - 1)) {
                minimum += '0';
            }
            for (int i = 0; i < s / 9; i++) {
                minimum += to_string(9);
            }
        }
        cout << minimum << " " << maximum << endl;
    }
    return 0;
}