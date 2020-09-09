//
// Created by TigerZhao on 2020-09-08.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    long long answer = 1ll * n * n;
    vector<pair<int, int>> pr; //stores first and last number in non-ascending seq
    for (int i = 0; i < n; i++) {
        int l; cin >> l;
        vector<int> s(l);
        for (int i = 0; i < l; i++) cin >> s[i];
        reverse(s.begin(), s.end());
        if (is_sorted(s.begin(), s.end())) {
            pr.emplace_back(s[0], s.back()); //store in cont if sequence is non-increasing
        }
    }
    sort(pr.begin(), pr.end()); //sort pairs in cont based on smallest number in sequences
    for (int i = 0; i < size(pr); i++) {
        answer -= pr.end() - lower_bound(pr.begin(), pr.end(),
                                           pair<int, int>(pr[i].second, -1));
        //count number of pairs such that min > max
        //pr.end() is the end of pr
        //find the first element within pr that has a min value greater than the max of pr[i]
        //everything between this element and the end cannot be concatenated before pr[i]
        //subtract from initial answer of n^2 which assumes all pairs are valid
        //concatenation in the reverse order is still valid, so only subtract 1 per pair found
    }
    cout << answer << endl;
    return 0;
}
