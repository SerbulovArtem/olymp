#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

#define int ll;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;
    std::vector<ll> arr(n);
    std::map<ll, ll> c;
    for(ll i = 0; i < n; ++i){
        cin >> arr[i];
        c[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    ll ans = c[arr[0]] * c[arr[n - 1]];
    if (n == 1) ans = 0;
    if(arr[0] != arr[n - 1]) {
        ans *= 2;
    }
    else{
        ans = (n-1) * n;
    }
    cout << ans << "\n";
}

signed main() {
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
