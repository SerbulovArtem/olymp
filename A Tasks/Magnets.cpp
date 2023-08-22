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

    vector<int> arr(n);
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int ans = 1;
    for (int i = 1; i < n; ++i){
        if (arr[i] != arr[i - 1]) ans++;
    }
    cout << ans;
}

signed main() {
    solve();
    return 0;
}

