//
// Created by TigerZhao on 2021-01-12.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long maxsf = INT_MAX;
  while (n--) {
    int w, h;
    cin >> w >> h;
    if (min(w, h) > maxsf) {
      cout << "NO" << endl;
      return 0;
    } else {
      if (max(w, h) <= maxsf) {
        maxsf = max(w, h);
      } else {
        maxsf = min(w, h);
      }
    }
  }
  cout << "YES" << endl;
  return 0;
}
