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

    vector<int> arr(n);

    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int sum = 0, min = arr[0];
    for (int i = 0; i < n; ++i){
        if (arr[i] < min) min = arr[i];
        sum += arr[i];
    }
    if (!min){
        if (!(sum & 1)){
            cout << "Zenyk\n";
            return;
        }
        else{
            cout << "Marichka\n";
            return;
        }
    }

    sum = 0;

    for (int i = 0; i < n; ++i){
        arr[i] -= min;
        sum += arr[i];
    }

    if (!(sum & 1)){
        cout << "Marichka\n";
    }
    else{
        cout << "Zenyk\n";
    }
}

signed main() {
    solve();
    return 0;
}

