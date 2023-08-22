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

    string temp{};

    char ch;

    int il = 0, iu = 0;

    for (int i = 0; i < str.length(); ++i){
        if (islower(str[i])) il++;
        else iu++;
    }

    if (iu > il){
        for (int i = 0; i < str.length(); ++i){
            temp.push_back(toupper(str[i]));
        }
    }
    if (iu <= il){
        for (int i = 0; i < str.length(); ++i){
            temp.push_back(tolower(str[i]));
        }
    }
    cout << temp;
}

signed main() {
    solve();
    return 0;
}


