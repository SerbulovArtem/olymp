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
    int x;
    cin >> x;

    int ans = 0;

    int temp = x;
    while(temp > 0){
        temp -= 5;
        ans++;
    }

    cout << ans;
}

signed main() {
    solve();
    return 0;
}

