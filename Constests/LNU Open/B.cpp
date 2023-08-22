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

    vector<int> arr1(n), arr2(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());


    int magic_num = 0;
    int j = 0, shift = 0;
    for (int i = 0; i < n; ++i) {
        if (arr1[i] < arr2[j]) {
            j = shift;
        }
        else if (arr1[i] > arr2[j]) {
            magic_num++;
            shift++;
            j++;
        }
    }

    if (magic_num >= ((n / 2) + 1)) cout << "Possible\n";
    else cout << "Impossible\n";
}

signed main() {
    solve();
    return 0;
}
