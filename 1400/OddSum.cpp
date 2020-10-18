//
// Created by TigerZhao on 2020-10-17.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    a.emplace_back(ai);
  }
  sort(a.begin(), a.end());
  long long lastOdd = LLONG_MIN;
  long long sumSF = 0;
  for (int i = n - 1; i >= 0; i--) {
    sumSF += a[i];
    if (sumSF % 2 != 0 && sumSF > lastOdd) {
      lastOdd = sumSF;
    }
  }
  cout << lastOdd << endl;
  return 0;
}
