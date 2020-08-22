//
// Created by Tiger Zhao on 2020-08-21.
//

#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;

    if (weight >= 4) {
        if (weight % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    return 0;
}