//
// Created by Tiger Zhao on 2020-08-21.
//

#include <iostream>
using namespace std;

int main() {
    int m;
    int n;
    cin >> m >> n;
    if (m % 2 == 0 || n % 2 == 0) {
        cout << m * n / 2 << endl;
    } else if (m > n) {
        cout << (m - 1) * n / 2  + n / 2<< endl;
    } else {
        cout << (n - 1) * m / 2 + m / 2 << endl;
    }
    return 0;
}