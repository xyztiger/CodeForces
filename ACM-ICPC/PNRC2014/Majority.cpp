#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int v;
    cin >> v;
    unordered_map<int, int> votes;
    for (int i = 0; i < v; i++) {
      int vote;
      cin >> vote;
      votes[vote]++;
    }
    int winner = 0;
    votes[winner] = 0;
    for (auto vote : votes) {
      if (vote.second > votes[winner]) {
        winner = vote.first;
      } else if (vote.second == votes[winner]) {
        winner = (winner < vote.first) ? winner : vote.first;
      }
    }
    cout << winner << endl;
  }
  return 0;
}
