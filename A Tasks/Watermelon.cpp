#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve(){
    int w;
    cin >> w;
    if (w == 2) cout << "NO\n";
    else if (!(w & 1)) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    solve();
    return 0;
}



