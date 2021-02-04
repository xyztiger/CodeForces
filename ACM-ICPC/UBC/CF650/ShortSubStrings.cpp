//
// Created by TigerZhao on 2020-09-24.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string b, a;
    cin >> b;
    a += b[0];
    a += b[1];
    for (int i = 3; i < b.length(); i += 2) {
      a += b[i];
    }
  cout << a << endl;
  }
  return 0;
}
