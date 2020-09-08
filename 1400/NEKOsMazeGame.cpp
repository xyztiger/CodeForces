//
// Created by TigerZhao on 2020-09-07.
//


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    bool maze[2][n + 2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n + 2; j++) {
            maze[i][j] = true;
        }
    }
    int row, col;
    int blocks = 0;
    while (q--) {
        cin >> row >> col;
        maze[row - 1][col] = !maze[row - 1][col];
        for (int i = -1; i < 2; i++) {
            if (!maze[2 - row][col + i]) {
                if (!maze[row - 1][col]) {
                    blocks++;
                } else {
                    blocks--;
                }
            }
        }
        cout << (blocks == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
