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

    int ans;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    sort(arr.rbegin(), arr.rend());

    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; ++i){
        if (arr[i] > 0) s1 += arr[i];
        else s2 += arr[i];
    }

    cout << abs(s1 - abs(s2)) << '\n';
}

signed main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}


