#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve() {
    string str;
    cin >> str;

    string ans = str;
    if (str.length() <= 10) cout << ans << '\n';
    else {
        ans = "";
        ans += str[0];
        ans += to_string(str.length() - 2);
        ans += str[str.length() - 1];
        cout << ans << '\n';
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
