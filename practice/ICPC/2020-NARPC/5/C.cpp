#include <bits/stdc++.h>

using namespace std;

int nextEven(int n) {
  if (n % 2) {
    return n + 1;
  } else {
    return n;
  }
}

int main() {
  int n, r, k;
  cin >> n >> r >> k;
  if (k > r) {
    if (n <= 2*k - r) {
      cout << 2*k << endl;
    } else {
      cout << nextEven(n - r) + 2*r << endl;
    }
  } else {
    if (n <= r) {
      cout << 2*r << endl;
    } else {
      cout << nextEven(n - r) + 2*r << endl;
    }
  }
  return 0;
}
