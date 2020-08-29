//
// Created by TigerZhao on 2020-08-28.
//


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        long k;
        cin >> n >> k;
        cout << k + (k-1)/(n-1) << endl;
    }
    return 0;
}
