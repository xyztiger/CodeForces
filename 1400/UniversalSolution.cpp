//
// Created by TigerZhao on 2020-09-02.
//


#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

char beat(char play) {
    switch (play) {
        case 'R': return 'P';
        case 'P': return 'S';
        case 'S': return 'R';
    }
}



int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        unordered_map<char, int> plays;
        int length = size(s);
        for (int i = 0; i < length; i++) {
            plays[s[i]]++;
        }
        char most;
        int times = 0;
        for (auto play : plays) {
            if (play.second > times) {
                most = play.first;
                times = play.second;
            }
        }
        for (int i = 0; i < length; i++) {
            cout << beat(most);
        }
        cout << endl;
    }
    return 0;
}
