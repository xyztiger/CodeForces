//
// Created by xyztiger on 2020-09-29.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string time;
    int add;
    cin >> time >> add;
    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2));
    if (minute + add >= 60) {
        hour += (minute + add) / 60;
        minute = (minute + add) % 60;
    } else {
        minute = minute + add;
    }
    if (hour >= 24) {
        hour = hour % 24;
    }
    if (minute < 10) {
        if (hour < 10) {
            cout << 0 << hour << ":" << 0 << minute;
        } else {
            cout << hour << ":" << 0 << minute;
        }
    } else {
        if (hour < 10) {
            cout << 0 << hour << ":" << minute;
        } else {
            cout << hour << ":" << minute;
        }
    }
    return 0;
}