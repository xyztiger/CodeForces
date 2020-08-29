//
// Created by TigerZhao on 2020-08-28.
//


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long largest = 0;
        long long sum = 0;
        bool positive;
        while (n--) {
            long long a;
            cin >> a;
            if (largest == 0) {
                largest = a;
                positive = a > 0;
            }
            if (positive == a > 0) {
                largest = max(largest, a);
            } else {
                sum += largest;
                largest = a;
                positive = a > 0;
            }
        }
        sum += largest;
        cout << sum << endl;
    }
    return 0;
}
