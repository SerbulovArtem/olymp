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
    auto ans = n / 2.0;
    cout << static_cast<int>(ceil(ans)) << '\n';
}

signed main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}


