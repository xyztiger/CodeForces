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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> filled;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        filled.push_back(i);
      }
    }
    int prev;
    int answer = 0;
    if (filled.empty()) {
      prev = 0;
      filled.insert(filled.begin(), prev);
      answer++;
    } else {
      answer += filled[0] / (k + 1);
      prev = filled[0];
    }
    for (int i = 1; i < filled.size(); i++) {
      answer += (filled[i] - prev - 1 - k) / (k + 1);
      prev = filled[i];
    }
    if (filled[filled.size() - 1] != n - 1) {
      answer += (n - prev - 1) / (k + 1);
    }
    cout << answer << endl;
  }
  return 0;
}
