//
// Created by TigerZhao on 2020-09-04.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string sub = "";
        string answer = "";
        for (int i = 0; i < size(s); i++) {
            if (s[i] == 't') {
                if (size(sub) == 0) {
                    sub += 't';
                    continue;
                }
            }
            if (s[i] == 'w') {
                if (sub == "t") {
                    sub += 'w';
                    continue;
                }
            }
            if (s[i] == 'o') {
                if (size(sub) == 0 || sub == "tw") sub += 'o';
                continue;
            }
            if (s[i] == 'n') {
                if (sub.find('o') != string::npos && (size(sub) == 1 || size(sub) == 3)) sub += 'n';
                continue;
            }
            if (s[i] == 'e') {
                if (sub.find('n') != string::npos && (size(sub) == 2 || size(sub) == 4)) sub += 'e';
                continue;
            }
            if (size(sub) == 3) {
                answer += to_string(i);
            } else if (size(sub) == 5) {
                answer += to_string(i - 1);
            }
            if ((s[i] == 't' || s[i] == 'o') && (size(sub) == 3 || size(sub) == 5)) {
                sub = s[i];
            } else {
                sub = "";
            }

        }
        cout << size(answer) << endl;
        for (int i = 0; i < size(answer); i++) {
            cout << answer[i] << ' ';
        }
        cout << endl;
        //stratting
    }
    return 0;
}
