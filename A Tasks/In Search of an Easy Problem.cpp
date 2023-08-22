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
    int x;
    for (int i = 0; i < n; ++i){
        cin >> x;
        if (x == 1){
            cout << "HARD\n";
            return;
        }
    }
    cout << "EASY\n";
}

signed main() {
    solve();
    return 0;
}
