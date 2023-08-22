#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    ll last_digit, t_num, sum = 0;
    for(ll i = 1; i <= 9; ++i){
        for(ll j = i; j <= n; j *= 10) ans++;
    }
    cout << ans << '\n';
}

signed main() {
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
