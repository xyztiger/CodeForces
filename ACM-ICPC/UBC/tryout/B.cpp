//
// Created by TigerZhao on 2020-10-17.
//


#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long double choose(long double n, long double k)
{
  if (k == 0) {
    return 1 * 1.0;
  } else {
    return (n * choose(n - 1, k - 1)) / k;
  }
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    long double r, s, x, y, w;
    cin >> r >> s >> x >> y >> w;
    long double win = s+1-r;
    long double lose = r-1;
    long double prob = 0;
    while (x <= y) {
      prob += choose(y, x) * powl(win, x) * powl(lose, y-x);
      x++;
    }
    if (prob > powl(s, y) / w) {
      cout << "yes \n";
    } else {
      cout << "no \n";
    }
  }
  return 0;
}
