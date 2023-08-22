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
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 1; i < s.length(); ++i){
        if (s[i - 1] == s[i]) ans++;
    }

    cout << ans;
}

signed main() {
    solve();
    return 0;
}


