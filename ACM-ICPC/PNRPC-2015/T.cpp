#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> a;
  vector<int> b;
  while (a.size() < 3) {
    int side;
    cin >> side;
    a.push_back(side);
  }
  while (b.size() < 3) {
    int side;
    cin >> side;
    b.push_back(side);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  for (int i = 0; i < 3; i++) {
    if (a[i] != b[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }
  if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
