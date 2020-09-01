//
// Created by TigerZhao on 2020-08-31.
//


#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string x;
        cin >> n >> x;
        string a, b;
        bool unequal = false;
        for (int i = 0; i < n; i++) {
            if (unequal) {
                a += '0';
                b += x[i];
            } else {
                if (x[i] == '2') {
                    a = b += '1';
                } else if (x[i] == '0') {
                    a = b += '0';
                } else {
                    unequal = true;
                    a += '1';
                    b += '0';
                }
            }
        }
        cout << a << endl << b << endl;
    }
    return 0;
}
