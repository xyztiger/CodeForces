//
// Created by Tiger Zhao on 2020-08-22.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int x = 0;
    string command;
    cin >> n;
    while (n--) {
        cin >> command;
        if (command[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}