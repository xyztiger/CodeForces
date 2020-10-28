//
// Created by xyztiger on 2020-10-27.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    int k = 0;
    while(cin >> n >> k) {
        int maxcigar = n;
        int butts = n;
        while (butts >= k) {
            butts -= k;
            butts++;
            maxcigar++;
        }
        cout << maxcigar << endl;
    }
    return 0;
}