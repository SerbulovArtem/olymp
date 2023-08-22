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
    int p;
    if (str[0] == 'Y') p = 1;
    else if (str[0] == 'e') p = 2;
    else if (str[0] == 's') p = 3;
    else {
        cout << "NO\n";
        return;
    }
    if (str.length() == 1) {
        cout << "YES\n";
        return;
    }
    for (int i = 1; i < str.length(); ++i) {
        if (p == 1) {
            if (str[i] != 'e') {
                cout << "NO\n";
                return;
            }
            p = 2;
        } else if (p == 2) {
            if (str[i] != 's') {
                cout << "NO\n";
                return;
            }
            p = 3;
        } else if (p == 3) {
            if (str[i] != 'Y') {
                cout << "NO\n";
                return;
            }
            p = 1;

        }
    }
    cout << "YES\n";

}

signed main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}

