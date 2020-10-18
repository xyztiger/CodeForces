//
// Created by TigerZhao on 2020-10-17.
//


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

long long a, b, c, flag;
char op;
string A, B, C;
vector<int> valid;
inline int c2i(char x)
{
  if (x >= '0'&&x <= '9')
    return x - '0';
  return x - 'a' + 10;
}
inline char i2c(int x)
{
  if (x == 36)
    return '0';
  if (x >= 10)
    return x - 10 + 'a';
  return x + '0';
}
long long gao(int base, string s)
{
  long long ret = 0; for (int j = 0; s[j]; j++)
  {
    ret *= base, ret += c2i(s[j]);
    if (ret >= 1ll << 32)
    {
      flag = 0; break;
    }
  }
  return ret;
}

int main()
{
  int n;
  cin >> n;
  while (n--) {
    int low = 1, a1 = 0;
    valid.clear();
    char equal;
    cin >> A >> op >> B >> equal >> C;
    for (int i = 0; A[i]; i++)
      low = max(low, c2i(A[i])), a1 += A[i] == '0';
    for (int i = 0; B[i]; i++)
      low = max(low, c2i(B[i])), a1 += B[i] == '0';
    for (int i = 0; C[i]; i++)
      low = max(low, c2i(C[i])), a1 += C[i] == '0';
    if (a1 || low != 1)
      low++;
    for (int i = low; i <= 36; i++)
    {
      flag = 1;
      a = gao(i, A), b = gao(i, B), c = gao(i, C);
      if (!flag)
        continue;
      if (op == '+'&&a + b == c
          || op == '*'&&a*b == c
          || op == '-'&&a - b == c
          || op == '/'&&b != 0
              && a%b == 0 && a / b == c)
        valid.push_back(i);
    }
    if (valid.empty()) {
      cout << "invalid" << endl;
    }
    else {
      for (auto c : valid) {
        cout << i2c(c);
      }
      cout << endl;
    }
  }
  return 0;
}