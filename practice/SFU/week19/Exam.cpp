//
// Created by TigerZhao on 2020-10-20.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int    n,i;

  while(cin >> n)
  {
    if(n == 1 || n == 2)
      cout << "1" << endl << "1" << endl;
    else    if(n == 3)
      cout << "2" << endl << "1 3" << endl;
    else
    {
      cout << n << endl;
      for(i = 2;i <= n;i += 2)
        cout << i << ' ';
      for(i = 1;i <= n;i += 2)
        if(i + 2 > n)
          cout << i;
        else
          cout << i << ' ';
      cout << endl;
    }
  }
  return    0;
}

