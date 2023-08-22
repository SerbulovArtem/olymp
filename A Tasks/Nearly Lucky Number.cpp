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
    string str;
    cin >> str;

    char ch;

    int ans = 0;
    for (int i = 0; i < str.length(); ++i){
        ch = str[i];
        if ((atoi(&ch) == 7) || (atoi(&ch) == 4)) ans++;
    }
    if ((ans == 4) || (ans == 7)) cout << "YES";
    else cout << "NO";
}

signed main() {
    solve();
    return 0;
}