//
// Created by TigerZhao on 2020-08-23.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string distinct = "\0";
    int count = 0;
    cin >> name;

    for (int i = 0; i < name.length(); i++) {
        if (distinct.find(name[i]) == string::npos) {
            distinct += name[i];
            count ++;
        }
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}