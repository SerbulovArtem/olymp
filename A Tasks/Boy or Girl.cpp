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
    char ch;

    string temp{};

    for (int i = 0; i < str1.length(); ++i) {
        if (find(temp.begin(), temp.end(), str1[i]) == temp.end()) {
            temp.push_back(str1[i]);
        }
    }


    if (!(temp.length() & 1)) cout << "CHAT WITH HER!" << '\n';
    else cout << "IGNORE HIM!" << '\n';


}

signed main() {
    solve();
    return 0;
}

