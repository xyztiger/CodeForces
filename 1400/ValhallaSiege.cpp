//
// Created by TigerZhao on 2020-09-08.
//


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using namespace std;

#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)

typedef long long ll;

const int MAX = 2e5 + 11;

ll a[MAX], csum[MAX];
int n;

int bs(int pos,ll &hits,ll val)
{
    if(val + hits < a[pos])
    {
        hits += val;
        return pos;
    }
    int st = pos,en = n;
    int ret;
    while(st <= en)
    {
        int md = (st + en)>>1;
        if(csum[md] - csum[pos - 1] - hits <= val)
            st = md + 1,ret = md;
        else
            en = md - 1;
    }
    if(ret == n)
    {
        hits = 0;
        return 1;
    }
    ret++;
    ll tmp = csum[ret] - csum[pos - 1] - hits - val;
    hits = a[ret] - tmp;
    return ret;
}

int main()
{
    int q;
    sc(n);
    sc(q);

    ll sm = 0;

    for(int i=1;i<=n;++i)
    {
        scll(a[i]);
        csum[i] = csum[i - 1] + a[i];
    }

    int cur = 1;
    ll hits = 0;

    for(int i=0;i<q;++i)
    {
        ll x;
        scll(x);
        cur = bs(cur,hits,x);
        printf("%d\n",n - cur + 1);
    }

    return 0;
}

//int main() {
//    int n, q;
//    cin >> n >> q;
//    long a[n];
//    long long k[q];
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < q; i++) {
//        cin >> k[i];
//    }
//    long long totalHealth[n + 1];
//    totalHealth[0] = 0;
//    for (int i = 1; i <= n; i++) {
//        totalHealth[i] = totalHealth[i - 1] + a[i - 1];
//    }
//    int l = 0;
//    int r = n;
//    long long target = 0;
//    long long index = 1;
//    for (int i = 0; i < q; i++) {
//        if (l == 0) {
//            target = k[i];
//        } else {
//            target += k[i];
//        }
//        while (l <= r) {
//            int mid = (l + r) / 2;
//            if (totalHealth[mid] > target) {
//                r = mid - 1;
//            } else {
//                index = mid;
//                l = mid + 1;
//            }
//        }
//        if (index == n) {
//            cout << n << endl;
//            l = 0;
//            r = n;
//        } else {
//            cout << n - index << endl;
//            l = index;
//            r = n;
//        }
//    }
//    return 0;
//}
