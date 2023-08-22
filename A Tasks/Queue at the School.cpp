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
    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    string ans = str;
    for (int i = 0; i < t; ++i){
        for (int j = 1; j < n; ++j){
            if (str[j - 1] == 'B' && str[j] == 'G'){
                swap(ans[j - 1], ans[j]);
            }
        }
        str = ans;
    }

    cout << ans << '\n';
}

signed main() {
    solve();
    return 0;
}


