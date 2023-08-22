#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

#define int ll
typedef long long ll;

void solve() {
    string str1, str2;
    cin >> str1 >> str2;

    string temp1{}, temp2{};

    char ch;

    for (int i = 0; i < str1.length(); ++i){
        ch = tolower(str1[i]);
        temp1.push_back(ch);
    }

    for (int i = 0; i < str2.length(); ++i){
        ch = tolower(str2[i]);
        temp2.push_back(ch);
    }

    cout << temp1.compare(temp2) << '\n';
}

signed main() {
    solve();
    return 0;
}
