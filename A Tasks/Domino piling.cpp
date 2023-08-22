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
    int x = 0;
    string str;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (str[0] == '+' || str[1] == '+') x++;
        else x--;
    }
    cout << x << '\n';
}

signed main() {
    solve();
    return 0;
}

