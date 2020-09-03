//
// Created by TigerZhao on 2020-09-01.
//


#include <bits/stdc++.h>
using namespace std;
const int l=100005;
int main()
{
    int a[l],b[l],n,m;
    char x;
    cin>>n;
    while(n--)
    {
        cin>>m;
        a[m]++;
        b[a[m]]++;
    }
    cin>>n;
    while(n--)
    {
        cin>>x>>m;
        if(x=='+') a[m]++,b[a[m]]++;
        else b[a[m]]--,a[m]--;
        if(b[8]>0 || (b[4]>=2) || (b[4]>0 && b[2]>=3) || (b[6]>0 && b[2]>=2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

