//
// Created by TigerZhao on 2020-09-01.
//


#include <iostream>
#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> storage;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        storage[a]++;
    }
    int q;
    cin >> q;
    char action;
    int length;
    for (int i = 0; i < q; i++) {
        cin >> action >> length;
        if (action == '+') {
            storage[length]++;
        } else {
            storage[length]--;
        }
        bool square = false;
        int rectangle = 0;
        for (auto i : storage) {
            if (i.second / 4 > 0 && !square) {
                square = true;
                i.second -= 4;
            }
            rectangle += i.second / 2;
        }
        cout << ((square && rectangle > 1) ? "YES" : "NO") << endl;
    }
    return 0;
}
