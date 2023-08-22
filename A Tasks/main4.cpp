#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll;
typedef long long ll;

void solve(){
    //string empty;
    //cin >> empty;

    ll x1, y1;
    cin >> x1 >> y1;
    ll x2, y2;
    cin >> x2 >> y2;
    ll x3, y3;
    cin >> x3 >> y3;

        if (x1 == x2 && ((y1 == y3)||(y2 == y3))) {
            cout << "NO\n";
            return;
        }
        if (x1 == x3 && ((y2 == y3)||(y2 == y1))) {
            cout << "NO\n";
            return;
        }
        if (x2 == x3 && ((y1 == y2)||(y1 == y3))) {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
}

signed main() {
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}