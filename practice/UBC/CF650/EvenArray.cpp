//
// Created by TigerZhao on 2020-09-24.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    int index[2] = {0, 0};
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 != i % 2) {
        index[a[i] % 2]++;
      }
    }
    if (index[0] == index[1]) {
      cout << index[0] << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
