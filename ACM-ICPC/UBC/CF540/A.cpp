#include <bits/stdc++.h>

using namespace std;

int main() {
  int q;
  cin >> q;
  long long n;
  int a, b;
  while (q--) {
    cin >> n >> a >> b;
    if (b < 2 * a) {
      cout << (n / 2 * (b * 1ll)) + (n % 2 * (a * 1ll)) << endl;
    } else {
      cout << n * (a * 1ll) << endl;
    }
  }
  return 0;
}

