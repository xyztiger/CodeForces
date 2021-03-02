#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string n;
    cin >> n;
    bool r = true;
    for (int i = 1; i < n.length(); i++) {
      if (n[i] < n[i - 1]) {
        r = false;
        break;
      }
    }
  }
  return 0;
}
