#include <bits/stdc++.h>

using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  if (l == r) {
    if (l) {
      cout << "Even " << 2 * l << endl;
    } else {
      cout << "Not a moose" << endl;
    }
  } else {
    cout << "Odd " << 2 * max(l, r) << endl;
  }
  return 0;
}
