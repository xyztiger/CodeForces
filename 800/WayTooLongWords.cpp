//
// Created by Tiger Zhao on 2020-08-21.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string word;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> word;
        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word.back() << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}