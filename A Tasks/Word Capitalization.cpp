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

    ch = toupper(str1[0]);

    temp.push_back(ch);
    for(int i = 1; i < str1.length(); ++i){
        temp.push_back(str1[i]);
    }

    cout << temp << '\n';

}

signed main() {
    solve();
    return 0;
}

