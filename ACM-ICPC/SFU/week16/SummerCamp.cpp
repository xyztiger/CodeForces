//
// Created by TigerZhao on 2020-09-22.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n; cin >> n;
  string prefix = "";
  for (int i = 1; i <= n; i++) {
    prefix.append(to_string(i));
  }
  cout << prefix[n - 1] << endl;
  return 0;
}
