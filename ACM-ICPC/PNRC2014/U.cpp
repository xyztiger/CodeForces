#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<int> answer;
    int count = 0;
    int n;
    cin >> n;
    vector<string> r1;
    vector<string> r2;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      r1.push_back(s);
    }
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      r2.push_back(s);
    }
    for (int i = 0; i < n; i++) {
      if (r1[i] == r2[i]) {
        cerr << "true" << endl;
        if (count) {
          answer.push_back(count);
        }
        answer.push_back(1);
        count = 0;
      } else {
        cerr << "false" << endl;
        count++;
      }
    }
    if (count) {
      answer.push_back(count);
    }
    for (int i : answer) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}
