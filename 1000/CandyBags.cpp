//
// Created by TigerZhao on 2020-08-24.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= (n * n) / 2; i++) {
        cout << i << ' ' << n * n + 1 - i << endl;
    }

    return 0;
}