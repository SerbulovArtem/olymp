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
    int n, m;
    cin >> n >> m;

    int ans = 0;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());


    for (int i = 0; i < m; ++i){
        if (arr[i] < 0) ans += abs(arr[i]);
    }

    cout << ans;
}

signed main() {
    solve();
    return 0;
}
