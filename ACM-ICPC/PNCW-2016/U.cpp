#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> socks;
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    long long s;
    cin >> s;
    socks.push_back(s);
    sum += s;
  }
  if (n == 1) {
    cout << 0 << endl;
    return 0;
  }
  if (n == 2) {
    cout << min(socks[0], socks[1]) << endl;
    return 0;
  }
  sort(socks.rbegin(), socks.rend());
  long long answer = 0;
  if (socks[0] <= sum / 2) {
    cout << sum / 2 << endl;
  } else {
    for (int i = 1; i < n; i++) {
      answer += socks[i];
    }
    cout << answer << endl;
  }
  return 0;
}
