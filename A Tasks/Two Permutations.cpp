#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve(){
    int n, a, b;
    cin >> n >> a >> b;

    if (n == a && n == b) {
        cout << "YES\n";
        return;
    }

    if (a + b >= n - 1) cout << "NO\n";
    else cout << "YES\n";
}

signed main() {
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}

