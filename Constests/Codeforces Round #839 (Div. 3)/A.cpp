// "Codeforces Round #839 (Div. 3)/A.cpp"

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve() {
    array<array<int, 2>, 2> arr{};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (arr[0][0] > arr[0][1] &&
            arr[1][0] > arr[1][1] &&
            arr[0][0] > arr[1][0] &&
            arr[0][1] > arr[1][1]) {
            cout << "YES\n";
            return;
        }
        swap(arr[0][0], arr[1][0]);
        swap(arr[1][0], arr[1][1]);
        swap(arr[1][1], arr[0][1]);
    }
    cout << "NO\n";
}

signed main() {
        int t;
        cin >> t;
        while (t--) solve();
        return 0;
    }