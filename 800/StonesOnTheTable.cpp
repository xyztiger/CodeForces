//
// Created by TigerZhao on 2020-08-23.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    char current = '\0';
    int count = 0;
    cin >> n >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == current) {
            count++;
        } else {
            current = s[i];
        }
    }
    cout << count << endl;
    return 0;
}