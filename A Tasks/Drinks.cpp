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

    double ans = 0;
    double x;
    for (int i = 0; i < n; ++i){
        cin >> x;
        ans += x;
    }
    cout << ans / n;
}

signed main() {
    solve();
    return 0;
}


