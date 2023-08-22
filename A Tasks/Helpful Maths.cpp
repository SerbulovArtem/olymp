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
    string str1;
    cin >> str1;

    vector<int> arr;

    for (int i = 0; i < str1.length(); i+= 2){
        arr.push_back(atoi(&str1[i]));
    }

    ranges::sort(arr);

    for (int i = 0; i < arr.size(); ++i){
        cout << arr[i];
        if (i != arr.size() - 1) cout << '+';
    }
    cout << '\n';





}

signed main() {
    solve();
    return 0;
}
