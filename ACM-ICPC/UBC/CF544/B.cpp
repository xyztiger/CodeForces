#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  long long usable[101] = {};
  long long total = 0;
  usable[k] = LLONG_MAX;
  for (int i = 0; i < n; i++) {
    long long d;
    cin >> d;
    d %= k;
    int index = (d == 0) ? 0 : k - d;
    if (usable[index]) {
      usable[index]--;
      total += 2;
    } else {
      usable[d]++;
    }
  }
  cout << total << endl;
  return 0;
}
