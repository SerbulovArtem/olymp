#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,no-stack-protector,fast-math")
#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define ld long double
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N = 1e5 + 5, M = 1e5 + 5;

int n, m;
int mn[N];

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i = 0 ; i < n ; ++i)
            mn[i] = n-1;

        for(int i = 0 ; i < m ; ++i){
            int x, y;
            cin>>x>>y;

            if(x > y)
                swap(x, y);

            mn[x-1] = min(mn[x-1], y - 1);
        }

        for(int i = n - 2 ; i>-1 ; --i)
            mn[i] = min(mn[i], mn[i + 1]);

        ll ans = 0;
        for(int i = 0 ; i < n ; ++i)
            ans += (mn[i] - i);

        cout<<'\n'<<ans+1;
    }
}