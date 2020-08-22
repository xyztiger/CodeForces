//
// Created by TigerZhao on 2020-08-22.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string first;
    string second;

    cin >> first >> second;

    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    if (first > second) {
        cout << 1 << endl;
    } else if (first < second) {
        cout << -1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}


