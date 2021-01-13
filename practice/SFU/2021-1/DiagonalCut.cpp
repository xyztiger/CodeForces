#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

double gcd(double a, double b)
{
  // Everything divides 0
  if (a == 0)
    return b;
  if (b == 0)
    return a;

  // base case
  if (a == b)
    return a;

  // a is greater
  if (a > b)
    return gcd(a-b, b);
  return gcd(a, b-a);
}

double getY (double slope, double x, double b) {
  return slope * x + b;
}

int main() {
  double m, n;
  cin >> m >> n;
  double gcf = gcd(m, n);
  m /= gcf;
  n /= gcf;
  int answer = 0;
  if (m > n) {
    double ratio = n / m;
    double prev = m;
    double x = 1;
    while (x < n) {
      double curr = getY(-ratio, x, m);
      if (floor(curr + prev) == curr + prev) {
        answer++;
      }
      prev = curr;
      x++;
    }
    cout << answer;
  } else if (m < n) {
    double ratio = m / n;
    double prev = m;
    double x = 1;
    while (x < m) {
      double curr = getY(-ratio, x, m);
      if (floor(curr + prev) == curr + prev) {
        answer++;
      }
      prev = curr;
      x++;
    }
    cout << answer;
  } else {
    cout << m << endl;
  }
  return 0;
}