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
    int k, n, w;
    cin >> k >> n >> w;

    int ans = 0;

    int sum = 0;
    for (int i = 1; i <= w; ++i){
        sum += k * i;
    }

    ans = sum - n;

    if (ans < 0) ans = 0;

    cout << ans;
}

signed main() {
    solve();
    return 0;
}

