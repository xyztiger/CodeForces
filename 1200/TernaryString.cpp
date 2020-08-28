//
// Created by TigerZhao on 2020-08-27.
//

#include <iostream>

using namespace std;

bool contains(int k, string s) {
    string seen = "\0";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int freq[4] = {0, 0, 0, 0};
        int i = 0;
        int j = 0;
        int rsf = s.length() + 1;
        freq[s[i] - '0']++;
        while (j < s.length()) {
            if (freq[1] && freq[2] && freq[3]) {
                rsf = min(rsf, j - i + 1);
                freq[s[i] - '0']--;
                i++;
            } else {
                j++;
                freq[s[j] - '0']++;
            }
        }
        if (rsf > s.length()) {
            cout << 0 << endl;
        } else {
            cout << rsf << endl;
        }
    }
    return 0;
}