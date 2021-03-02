#include <bits/stdc++.h>

using namespace std;

long long ceilDiv(long long a, long long x) {
  return a / x + (a % x != 0);
}

int main() {
  long long t;
  cin >> t;
  while (t--) {
    long long n, x;
    cin >> n >> x;
    long long mx = 0;
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
      long long a;
      cin >> a;
      sum += a;
      mx += ceilDiv(a, x);
    }
    cout << ceilDiv(sum, x) << " " << mx << endl;
  }
  return 0;
}
