//
// Created by TigerZhao on 2020-09-24.
//


//testing vim


#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

int main() {
  int q;
  cin >> q;

  while (q--) {
    int frequency[26] = {};
    string s;
    cin >> s;
    for (char c : s) {
      frequency[(int)c - 97]++;
    }
    int m; cin >> m;
    vector<tuple<int, int>> b; //<bi, i>
    for (int i = 0; i < m; i++) {
      int val;
      cin >> val;
      b.emplace_back(make_tuple(val, i)); //stores value and initial index
    }
    sort(b.begin(), b.end());
    int charIndex = 25;
    vector<int> zeroIndexes;
    char t[m];
    for (int i = 0; i < b.size(); i++) {
      if (get<0>(b[i]) != 0) {
        //get index of "latest" character whose count >= number of 0's
        while (frequency[charIndex] < zeroIndexes.size()) {
          charIndex--;
        }
        //loop through rest of b, all non-0's
        for (int j = i; j < b.size(); j++) {
          for (int k = 0; k < zeroIndexes.size(); k++) {
            //place character at position of 0's in t
            t[zeroIndexes[k]] = (char)(charIndex + 97);
            //subtract index difference to 0 from all non-0's
            get<0>(b[j]) -= abs(get<1>(b[j]) - zeroIndexes[k]);
            //guarantees that the current number becomes 0
          }
        }
        sort(b.begin() + i, b.end());
        charIndex--;
        zeroIndexes = {}; //reset indexes of 0's
      }
      zeroIndexes.emplace_back(get<1>(b[i])); //store indexes of 0's
    }
    while (frequency[charIndex] < zeroIndexes.size()) {
      charIndex--;
    }
    for (int k = 0; k < zeroIndexes.size(); k++) {
      //place character at position of 0's in t
      t[zeroIndexes[k]] = (char)(charIndex + 97);
    }
    for (int i = 0; i < sizeof(t); i++) {
      cout << t[i];
    }
    cout << endl;
  }
  return 0;
}
