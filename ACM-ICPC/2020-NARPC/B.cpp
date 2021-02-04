#include <bits/stdc++.h>

using namespace std;

vector<int> & dynamicProgram(vector<int> & dp) {

}

int main() {
  int s, p, m, n;
  cin >> s >> p >> m >> n;
  vector<int> days;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    days.push_back(d);
  }
  int vector<int> dp(n, 0);
  if (s < p) {
    dp[0] = s;
  } else {
    dp[0] = p;
  }
  return 0;
}
