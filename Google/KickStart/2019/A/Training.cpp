#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int caseNum = 1; caseNum <= t; caseNum++) {
    int n, p;
    cin >> n >> p;
    vector<int> students;
    for (int i = 0; i < n; i++) {
      int s;
      cin >> s;
      students.push_back(s);
    }
    sort(students.rbegin(), students.rend());
    vector<int> sums;
    int sum = 0;
    for (int s : students) {
      sum += s;
      sums.push_back(sum);
    }
    int minSF = INT_MAX;
    for (int i = 0; i <= n - p; i++) {
      minSF = min(minSF, students[i] * (p - 1) - (sums[i + p - 1] - sums[i]));
    }
    cout << "Case #" << caseNum << ": " << minSF << "\n";
  }
}
