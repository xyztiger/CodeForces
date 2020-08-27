//
// Created by TigerZhao on 2020-08-26.
//

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int last0 = '\0';
        int first1 = '\0';
        bool erase = false;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0' && last0 == '\0') {
                last0 = i;
            } else if (last0 != '\0' && s[i] == '1') {
                erase = true;
                first1 = i;
            }
        }
        if (erase) {
            for (int i = 0; i < first1; i++) {
                cout << s[i];
            }
            for (int i = last0; i < n; i++) {
                cout << s[i];
            }
        } else {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}