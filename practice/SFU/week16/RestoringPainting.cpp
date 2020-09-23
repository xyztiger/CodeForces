//
// Created by TigerZhao on 2020-09-22.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  int answer = 0;
  for (int i = 1; i <= n; i++) {
    int sum = a + b + i;
    for (int j = 1; j <= n; j++) {
      if (a + c + j == sum) {
        for (int l = 1; l <= n; l++) {
          if (b + d + l == sum) {
            for (int m = 1; m <= n; m++) {
              if (c + d + m == sum) {
                answer++;
              }
            }
          }
        }
      }
    }
  }
  cout << n * answer << endl;
  return 0;
}
