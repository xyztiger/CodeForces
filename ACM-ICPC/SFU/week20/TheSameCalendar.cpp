//
// Created by xyztiger on 2020-10-27.
//

#include <bits/stdc++.h>

using namespace std;

bool leap(int y) {
    return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

int main() {
    int y;
    cin >> y;
    bool leap_initial = leap(y);
    bool leap2 = !leap_initial;
    int days = 0;
    while (days % 7 != 0 || leap_initial != leap2) {
        if (leap(y)) {
            days += 2;
        } else {
            days += 1;
        }
        y++;
        leap2 = leap(y);
    }
    cout << y << endl;
    return 0;
}