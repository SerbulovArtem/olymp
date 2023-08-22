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
    int a, b;
    cin >> a >> b;

    int ans = 0;
    while(a <= b){
        a = a * 3;
        b = b * 2;
        ans++;
    }

    cout << ans;
}

signed main() {
    solve();
    return 0;
}
