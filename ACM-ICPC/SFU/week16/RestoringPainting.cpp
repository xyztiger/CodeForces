//
// Created by TigerZhao on 2020-09-22.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  long long n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  long long maximum = max({a + b, a + c, c + d, b + d});
  long long minimum = min({a + b, a + c, c + d, b + d});
  long long answer = max(0 * 1ll, n * (n - maximum + minimum));
  cout << answer << endl;
  return 0;
}
