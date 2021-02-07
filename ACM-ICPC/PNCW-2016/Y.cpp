#include <bits/stdc++.h>

using namespace std;

vector<int> seq;

int zigzag(int index) {
  if (seq[index] > seq[index-1]) {
    return 1;
  } else if (seq[index] < seq[index-1]) {
    return -1;
  } else {
    return 0;
  }
}


int main() {
  int n;
  cin >> n;
  int longest = 1;
  if (n == 1) {
    cout << longest << endl;
    return 0;
  }
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    seq.push_back(a);
  }
  int prev = -1 * zigzag(1);
  int sum = prev ? 1 : 0;
  for (int i = 1; i < n; i++) {
    if (seq[i] > seq[i-1] && prev == -1) {
      sum++;
      longest = max(sum, longest);
    } else if (seq[i] < seq[i-1] && prev == 1) {
      sum++;
      longest = max(sum, longest);
    } else {
      sum = 0;
    }
    prev = zigzag(i);
  }
  cout << longest << endl;
  return 0;
}
      
      

