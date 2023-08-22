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

    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    vector<int> ans(n);
    for (int i = 0; i < n; ++i){
        ans[arr[i] - 1] = i + 1;
    }

    for (auto &el : ans){
        cout << el << ' ';
    }

}

signed main() {
    solve();
    return 0;
}

