#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve(){
    int n, m;
    cin >> n >> m;
    //vector<int> arr(m);
    int x, y;
    for (int i = 0; i < m; ++i){
        cin >> x >> y;
    }

    if (m < n) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

