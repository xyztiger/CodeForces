//
// Created by TigerZhao on 2020-10-17.
//


#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    string original;
    cin >> original;
    long long l = original.length();
    long long m = 1;
    while (pow(m, 2) < l) {
      m+=1;
    }
    string padding = string(pow(m, 2) - l, '*');
    string modified = original + padding;
    char table[m][m];
    int index = 0;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
        table[i][j] = modified[index];
        index++;
      }
    }
    string encrypted = "";
    for (int j = 0; j < m; j++) {
      for (int i = m - 1; i >= 0; i--) {
        if (table[i][j] != '*') {
          encrypted += table[i][j];
        }
      }
    }
    cout << encrypted << endl;
  }
  return 0;
}
