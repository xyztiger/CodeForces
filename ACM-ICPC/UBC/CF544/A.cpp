#include <bits/stdc++.h>

using namespace std;

int main() {
  int h1, m1, h2, m2;
  char c;
  cin >> h1 >> c >> m1 >> h2 >> c >> m2;
  int duration = 0;
  duration += (h2 - h1) * 60;
  duration += m2 - m1;
  duration /= 2;
  cerr << duration << endl;
  h1 += duration/60;
  m1 += duration % 60;
  if (m1 >= 60) {
    m1 -= 60;
    h1 += 1;
  }
  if (h1 < 10) {
    if (m1 < 10) {
      cout << 0 << h1 << ":" << 0 << m1 << endl;
    } else {
      cout << 0 << h1 << ":" << m1 << endl;
    }
  } else {
    if (m1 < 10) {
      cout << h1 << ":" << 0 << m1 << endl;
    } else {
      cout << h1 << ":" << m1 << endl;
    }
  }
  return 0;
}
