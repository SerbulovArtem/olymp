#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <ranges>

using namespace std;

#define int ll
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int j = 0; j < n; j++)
        cin >> a[j];
    int mn = 0, mx = int(1e9);
    for(int j = 0; j + 1 < n; j++)
    {
        int x = a[j];
        int y = a[j + 1];
        int midL = (x + y) / 2;
        int midR = (x + y + 1) / 2;
        if(x < y)
            mx = min(mx, midL);
        if(x > y)
            mn = max(mn, midR);
    }
    if(mn <= mx) cout << mn << endl;
    else cout << -1 << endl;
}

signed main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}




