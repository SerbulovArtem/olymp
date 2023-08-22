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
    string str1, str2;
    cin >> str1 >> str2;

    reverse(str2.begin(), str2.end());
    if (str1 == str2) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    solve();
    return 0;
}



