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
    int n, h;
    cin >> n >> h;

    int x;
    int ans = 0;
    for (int i = 0; i < n; ++i){
        cin >> x;
        if (x > h) ans += 2;
        else ans++;
    }

    cout << ans;
}

signed main() {
    solve();
    return 0;
}