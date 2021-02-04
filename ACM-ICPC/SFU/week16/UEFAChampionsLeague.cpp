//
// Created by TigerZhao on 2020-09-22.
//


#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    unordered_map<string, int[2]> teams;
    for (int i = 0; i < 12; i++) {
      string name1, name2, vs;
      int score1, score2;
      cin >> name1 >> score1 >> vs >> score2 >> name2;
      if (score1 > score2) {
        teams[name1][0] += 3;
      } else if (score2 > score1) {
        teams[name2][0] += 3;
      } else {
        teams[name1][0]++;
        teams[name2][0]++;
      }
      teams[name1][1] += score1 - score2;
      teams[name2][1] += score2 - score1;
    }
    string first;
    string second;
    int max = 0;
    int runnerup = 0;
    int maxSD = 0;
    int runnerupSD = 0;
    for (const auto& keyval : teams) {
      const auto& key = keyval.first;
      const auto& val = keyval.second;
      if (val[0] > runnerup) {
        if (val[0] > max) {
          runnerup = max;
          runnerupSD = maxSD;
          max = val[0];
          maxSD = val[1];
          second = first;
          first = key;
        } else  if (val[0] == max && val[1] > maxSD) {
          runnerup = max;
          runnerupSD = maxSD;
          max = val[0];
          maxSD = val[1];
          second = first;
          first = key;
        } else {
          runnerup = val[0];
          runnerupSD = val[1];
          second = key;
        }
      } else if (val[0] == runnerup && val[1] > runnerupSD) {
        if (val[0] == max && val[1] > maxSD) {
          runnerup = max;
          runnerupSD = maxSD;
          max = val[0];
          maxSD = val[1];
          second = first;
          first = key;
        } else {
          runnerup = val[0];
          runnerupSD = val[1];
          second = key;
        }
      }
    }
    cout << first << " " << second << endl;
  }
  return 0;
}
