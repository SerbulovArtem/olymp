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

    if (!(n & 1)) cout << n / 2;
    else cout << (n / 2 + 1) * (-1);
}

signed main() {
    solve();
    return 0;
}

