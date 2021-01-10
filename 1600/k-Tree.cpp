#include <bits/stdc++.h>
using namespace std;

int k;
unordered_map<int, int> solved;

int solve(int n) {
  if (solved[n]) {
    return solved[n];
  } else {
    if (n == 1) {
      solved[1] = 1;
      return 1;
    }
    int answer = 0;
    for (int i = 1; i <= k; i++) {
      answer += solve(n - i);
    }
    solved[n] = answer;
    return answer;
  }
}

int main() {
  int n, d;
  cin >> n >> k >> d;
  int answer = 0;
  for (int i = d; i <= k; i++) {
    answer += solve(n - i);
  }
  cout << answer << endl;
  return 0;
}
