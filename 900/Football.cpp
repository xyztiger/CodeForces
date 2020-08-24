//
// Created by TigerZhao on 2020-08-23.
//

#include <iostream>
using namespace std;

int main() {
    string s;
    char prev = '\0';
    int count = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (prev == s[i]) {
            count ++;
            if (count == 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            prev = s[i];
            count = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}