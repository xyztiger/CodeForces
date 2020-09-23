//
// Created by TigerZhao on 2020-09-17.
//


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int coffee(int n) { //2n
    int s = n * n;
    for (int q = 0; q < n; q++) //n
        s = s - q;
    for (int q = n; q > 0; q--) //n
        s = s - q;
    return s + 2;
}

int mocha(int n) {
    int r = 0;
    for (int i=0; i<=n; i = i+16) //n
        for (int j=0; j<i; j++)
            r++;
    return r;
}

int espresso(int n) {
    int j=0;
    for (int k = 16; coffee(k) * mocha(k) - k <= n; k+=16) {
        j++;
        cout << "I am having so much fun with asymptotics!" << endl;
    }
    return j;
}

int fun(int n) {
    int j = 0;
    for (int k = 0; k < coffee(k) * n; k++) //2n * 2n
        j = j + 2;
    return espresso(mocha(j));
}


int main() {
  for (int i = 0; i <= 100; i++) {
    if (i % 15 == 0) {
      cout << "FizzBuzz" << endl;
    } else if (i % 3 == 0) {
      cout << "Fizz" << endl;
    } else if (i % 5 == 0) {
      cout << "Buzz" << endl;
    } else {
      cout << i << endl;
    }
  }
  return 0;
}
