//
// Created by Tiger Zhao on 2020-08-21.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    int a;
    int b;
    int c;
    int total = 0;
    cin >> n;

    while (n--) {
        cin >> a >> b >> c;
        if (a + b + c > 1) {
            total ++;
        }
    }
    cout << total << endl;

    return 0;
}