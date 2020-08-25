//
// Created by TigerZhao on 2020-08-24.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    int curr;
    int prev1;
    int prev2;
    cin >> n;

    while (n--) {
        cin >> curr;
        if (prev1 == 0 && prev2 == 1 && curr == 1) {
            count++;
            curr = 0;
        }
        prev2 = prev1;
        prev1 = curr;
    }
    cout << count << endl;
    return 0;
}