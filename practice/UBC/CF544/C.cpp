#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long> a;
  for (int i = 0; i < n; i++) {
    long student;
    cin >> student;
    a.emplace_back(student);
  }
  sort(a.begin(), a.end());
  int maxsf = 0;
  for (int i = 0; i < n; i++) {
    int index = upper_bound(a.begin(), a.end(), a[i] + 5) - a.begin();
    maxsf = max(maxsf, index - i);  
  }
  cout << maxsf << endl;
  return 0;
}
