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
    int n;
    cin >> n >> str;

    if (str.length() == 1){
        cout << "NO\n";
        return;
    }

    int magic_num = 0;
    int a_num = 0, q_num = 0;
    for (auto i = str.begin(); i != str.end(); ++i){

        if (*i == 'Q' && magic_num < 0) magic_num = 0;

        if (*i == 'Q') magic_num++;
        else if (*i == 'A') magic_num--;
    }
    if (magic_num > 0) cout << "NO\n";
    else cout << "YES\n";
}

signed main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}

