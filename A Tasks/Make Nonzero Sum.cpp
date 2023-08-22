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
    vector<int> arr(n);
    for (int & i : arr){
        cin >> i;
    }

    int sum = 0, sign = 1;
    for (int &i : arr){
        i *= sign;
        sum += i;
        sign *= -1;
    }
    if (sum & 1) cout <<
}

signed main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}

