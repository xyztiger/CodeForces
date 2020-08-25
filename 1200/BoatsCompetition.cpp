//
// Created by TigerZhao on 2020-08-24.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    int n;
    cin >> t;

    while (t--) {
        int max = 0;
        cin >> n;
        int people[n];
        for (int i = 0; i < n; i++) {
           cin >> people[i];
        }
        sort(people, people + n);
        for (int i = 2; i <= 2 * n; i++) {
            int count = 0;
            int a = 0;
            int b = n;
            while (a < b) {
                if (people[a] + people[b] == i) {
                    count++;
                    max = ::max(max, count);
                    a++;
                    b--;
                } else if (people[a] + people[b] < i) {
                    a++;
                } else if (people[a] + people[b] > i) {
                    b--;
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}