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
    int n, k;
    cin >> n >> k;

    int ans = 0;
    for (int i = 0; i < k; ++i){
        if (n % 10 == 0){
            n /= 10;
        }
        else n--;
    }
    cout << n;
}

signed main() {
    solve();
    return 0;
}



