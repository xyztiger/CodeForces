#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return (a / gcd(a, b)) * b;
}

int main() {
  int p, q, s;
  cin >> p >> q >> s;
  if (lcm (p, q) <= s) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
  return 0;
}
