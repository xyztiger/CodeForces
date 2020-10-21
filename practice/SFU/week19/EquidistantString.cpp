//
// Created by TigerZhao on 2020-10-20.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  vector<int> distance;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != t[i]) {
      distance.emplace_back(i);
    }
  }
  if (distance.size() % 2 == 0) {
    for (int i = 0; i < distance.size() / 2; i++) {
      if (s[distance[i]] == '0') {
        s[distance[i]] = '1';
      } else {
        s[distance[i]] = '0';
      }
    }
    cout << s << endl;
  } else {
    cout << "impossible" << endl;
  }
  return 0;
}
