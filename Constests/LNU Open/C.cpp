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

    vector<int> arr(m);


    for (int i = 0; i < m; ++i){
        cin >> arr[i];
        if (arr[i] == n) {
            cout << "TAK\n";
            return;
        }
        sum += arr[i];
    }
    if (sum == n * (m - 1)) cout << "TAK\n";
    else cout << "NI\n";
}

signed main() {
    solve();
    return 0;
}
