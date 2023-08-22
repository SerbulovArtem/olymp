#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <ranges>

using namespace std;

#define int ll
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int p, q;
    int sum = 0;
    for (int i = 0; i < n; ++i){
        cin >> p >> q;
        if (q - p >= 2) sum++;
    }
    cout << sum << '\n';
}

signed main() {
    solve();
    return 0;
}
