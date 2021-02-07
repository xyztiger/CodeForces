#include <bits/stdc++.h>

using namespace std;

void fillDice(vector<int>& d) {
  for (int i = 0; i < 6; i++) {
    int side;
    cin >> side;
    d.push_back(side);
  }
}

void round(float* wins) {
  int val = (int)(*wins * 100000 + 0.5);
  *wins = (float)val / 100000;
}

int main() {
  vector<int> d1;
  fillDice(d1);
  vector<int> d2;
  fillDice(d2);
  float wins1 = 0;
  float wins2 = 0;
  for (int side1 : d1) {
    for (int side2 : d2) {
      if (side1 > side2) {
        wins1++;
      } else if (side2 > side1) {
        wins2++;
      }
    }
  }
  wins1 = wins1 / (wins1 + wins2);
  cout << fixed << setprecision(5) << wins1 << endl;
  return 0;
}
  
