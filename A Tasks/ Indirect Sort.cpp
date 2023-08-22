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
    vector<int> arr(n);
    for (int & i : arr){
        cin >> i;
    }

    if (arr[0] == 1) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}

