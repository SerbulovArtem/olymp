#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int ans = 0;

    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    if (arr[0] > 0) ans++;
    else {
        cout << ans << '\n';
        return;
    }
    for (int i = 1; i < n; ++i){
        if (arr[i] > 0 && ans < k) ans++;
        else if ((arr[i] == arr[i - 1]) && (arr[i] > 0)) ans++;
        else {
            cout << ans << '\n';
            return;
        }
    }
    cout << ans << '\n';

}

signed main() {
    solve();
    return 0;
}

