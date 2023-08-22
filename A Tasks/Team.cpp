#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int x1, x2, x3, ans = 0;
    for (int i = 0; i < n; ++i){
        cin >> x1 >> x2 >> x3;
        if ((x1 + x2 + x3) >= 2){
            ans++;
        }
    }
    cout << ans << '\n';
}

signed main() {
    solve();
    return 0;
}
