//
// Created by TigerZhao on 2020-08-22.
//

#include <iostream>
using namespace std;

int main() {
    int row = 1;
    int col = 0;
    int a;
    for (int i = 25; i > 0; i--) {
        if (col < 5) {
            col++;
        } else {
            col = 1;
            row++;
        }
        cin >> a;
        if (a == 1) {
            cout << abs(row - 3) + abs(col - 3) << endl;
        }
    }

    return 0;
}