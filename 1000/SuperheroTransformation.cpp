//
// Created by TigerZhao on 2020-08-24.
//

#include <iostream>
using namespace std;

int main() {
    string vowels = "aeiou";
    string s;
    string t;
    cin >> s >> t;

    if (s.length() == t.length()) {
        for (int i = 0; i < s.length(); i++) {
            if ((vowels.find(s[i]) != string::npos) !=
                (vowels.find(t[i]) != string::npos)) {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}