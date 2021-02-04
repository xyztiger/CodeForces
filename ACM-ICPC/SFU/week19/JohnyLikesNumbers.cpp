//
// Created by TigerZhao on 2020-10-20.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  long long i = 1;
  while (k * i <= n) {
    i++;
  }
  cout << k*i << endl;
  return 0;
}
