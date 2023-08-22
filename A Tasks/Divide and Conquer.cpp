#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int sum = 0;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    if(sum % 2 == 0){
        cout << 0 << "\n";
        return;
    }
    sort(a.begin(), a.end());
    int ans = 1e10;
    for(int i = 0; i < n; ++i){
        int tmp = 0;
        if(a[i] % 2 == 0) {
            while (a[i] % 2 == 0) {
                ++tmp;
                a[i] /= 2;
            }
        }else{
            while(a[i] % 2 != 0){
                ++tmp;
                a[i] /= 2;
            }
        }
        ans = min(ans, tmp);
    }
    cout << ans << "\n";
}

signed main() {
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
