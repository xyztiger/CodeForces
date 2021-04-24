#include <bits/stdc++.h>

using namespace std;

vector<int> arr;

int getFirstDigit(int a) {
  return a/(int)pow(10, floor(log10(a)));
}

int getDigitDiff(int a, int b) {
  return floor(log10(a)) - floor(log10(b));
}

int handleLesser(int i) {
  int prevFirst = getFirstDigit(arr[i-1]);
  int currFirst = getFirstDigit(arr[i]);
  int digitDiff = getDigitDiff(arr[i-1], arr[i]);
  if (prevFirst < currFirst) {
    arr[i] *= 10*digitDiff;
    return digitDiff;
  }
  if (prevFirst > currFirst) {
    arr[i] *= 10*(digitDiff + 1);
    return ++digitDiff;
  }
  if (prevFirst == currFirst) {
    arr[i] = arr[i-1] + 1;
    return getDigitDiff(arr[i-1], arr[i]) + digitDiff;
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T; cin >> T;
  for (int t = 1; t <= T; t++) {
    int n; 
    cin >> n;
    arr.assign(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int answer = 0;
    for (int i = 1; i < n; i++) {
      if (arr[i] <= arr[i-1]) {
        answer += handleLesser(i);
      }
      cout << arr[i-1] << " ";
    }
    cout << arr[n-1] << '\n';
    cout << "Case #" << t << ": " << answer << '\n';
  }
  return 0;
}

