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

    string str;
    cin >> str;

    int ans = 0;
    for (int i = 0; i < n; ++i){
        if (str[i] == 'A') ans++;
        else ans--;
    }

    if (ans > 0) cout << "Anton" << '\n';
    else if (ans < 0) cout << "Danik" << '\n';
    else cout << "Friendship" << '\n';
}

signed main() {
    solve();
    return 0;
}

