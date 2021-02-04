//
// Created by TigerZhao on 2020-10-17.
//


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  string simon = "Simon says ";
  while (n--) {
    string given;
    getline(cin, given);
    string prefix = given.substr(0, 11);
    if (prefix == simon) {
      cout << given.substr(11, given.size()) << endl;
    }
  }
  return 0;
}
